#pragma once

#ifndef RED_BLACK_TREE_RBTREE_H
#define RED_BLACK_TREE_RBTREE_H

#include <iostream>
using namespace std;

enum Color { RED, BLACK, DOUBLE_BLACK };

template <class T>
struct RB_Node
{
    RB_Node<T>* left, * right, * parent;

    int color;
    T data;
    string path;

    RB_Node<T>(T data = 0, string path = "", string data2= "") 
    {
        this->data = data;
        this->path = path;
        insert_in_txt(data2, path);
        left = right = parent = nullptr;
        color = RED;
    }
};
template <class T>
class RB_Tree
{
private:
    RB_Node<T>* root;
public:
    RB_Tree() 
    {
        root = nullptr;
    }

    void rotate_Left(RB_Node<T>*& ptr)
    {
        RB_Node<T>* right_child = ptr->right;
        ptr->right = right_child->left;

        if (ptr->right != nullptr)
            ptr->right->parent = ptr;

        right_child->parent = ptr->parent;

        if (ptr->parent == nullptr)
            root = right_child;
        else if (ptr == ptr->parent->left)
            ptr->parent->left = right_child;
        else
            ptr->parent->right = right_child;

        right_child->left = ptr;
        ptr->parent = right_child;
    }

    void rotate_Right(RB_Node<T>*&ptr)
    {
        RB_Node<T>* left_child = ptr->left;
        ptr->left = left_child->right;

        if (ptr->left != nullptr)
            ptr->left->parent = ptr;

        left_child->parent = ptr->parent;

        if (ptr->parent == nullptr)
            root = left_child;
        else if (ptr == ptr->parent->left)
            ptr->parent->left = left_child;
        else
            ptr->parent->right = left_child;

        left_child->right = ptr;
        ptr->parent = left_child;
    }

    void fix_Delete_RB_Tree(RB_Node<T>*& rb_node)
    {
        if (rb_node == nullptr)
            return;

        if (rb_node == root) {
            root = nullptr;
            return;
        }

        if (get_Color(rb_node) == RED || get_Color(rb_node->left) == RED || get_Color(rb_node->right) == RED) {
            RB_Node<T>* child = rb_node->left != nullptr ? rb_node->left : rb_node->right;

            if (rb_node == rb_node->parent->left) {
                rb_node->parent->left = child;
                if (child != nullptr)
                    child->parent = rb_node->parent;
                set_Color(child, BLACK);
                delete (rb_node);
            }
            else {
                rb_node->parent->right = child;
                if (child != nullptr)
                    child->parent = rb_node->parent;
                set_Color(child, BLACK);
                delete (rb_node);
            }
        }
        else {
            RB_Node<T>* sibling = nullptr;
            RB_Node<T>* parent = nullptr;
            RB_Node<T>* ptr = rb_node;
            set_Color(ptr, DOUBLE_BLACK);
            while (ptr != root && get_Color(ptr) == DOUBLE_BLACK) {
                parent = ptr->parent;
                if (ptr == parent->left) {
                    sibling = parent->right;
                    if (get_Color(sibling) == RED) {
                        set_Color(sibling, BLACK);
                        set_Color(parent, RED);
                        rotate_Left(parent);
                    }
                    else {
                        if (get_Color(sibling->left) == BLACK && get_Color(sibling->right) == BLACK) {
                            set_Color(sibling, RED);
                            if (get_Color(parent) == RED)
                                set_Color(parent, BLACK);
                            else
                                set_Color(parent, DOUBLE_BLACK);
                            ptr = parent;
                        }
                        else {
                            if (get_Color(sibling->right) == BLACK) {
                                set_Color(sibling->left, BLACK);
                                set_Color(sibling, RED);
                                rotate_Right(sibling);
                                sibling = parent->right;
                            }
                            set_Color(sibling, parent->color);
                            set_Color(parent, BLACK);
                            set_Color(sibling->right, BLACK);
                            rotate_Left(parent);
                            break;
                        }
                    }
                }
                else {
                    sibling = parent->left;
                    if (get_Color(sibling) == RED) {
                        set_Color(sibling, BLACK);
                        set_Color(parent, RED);
                        rotate_Right(parent);
                    }
                    else {
                        if (get_Color(sibling->left) == BLACK && get_Color(sibling->right) == BLACK) {
                            set_Color(sibling, RED);
                            if (get_Color(parent) == RED)
                                set_Color(parent, BLACK);
                            else
                                set_Color(parent, DOUBLE_BLACK);
                            ptr = parent;
                        }
                        else {
                            if (get_Color(sibling->left) == BLACK) {
                                set_Color(sibling->right, BLACK);
                                set_Color(sibling, RED);
                                rotate_Left(sibling);
                                sibling = parent->left;
                            }
                            set_Color(sibling, parent->color);
                            set_Color(parent, BLACK);
                            set_Color(sibling->left, BLACK);
                            rotate_Right(parent);
                            break;
                        }
                    }
                }
            }
            if (rb_node == rb_node->parent->left)
                rb_node->parent->left = nullptr;
            else
                rb_node->parent->right = nullptr;
            delete(rb_node);
            set_Color(root, BLACK);
        }
    }

    void inorder_BST(RB_Node<T>*& ptr)
    {
        if (ptr == nullptr)
            return;

        inorder_BST(ptr->left);
        cout << ptr->data << " " << ptr->color << endl;
        inorder_BST(ptr->right);
    }

    void preorderBST(RB_Node<T>*& ptr)
    {
        if (ptr == nullptr)
            return;

        cout << ptr->data << " " << ptr->color << "\t";
        preorderBST(ptr->left);
        preorderBST(ptr->right);
    }

    int get_Color(RB_Node<T>*& rb_node)
    {
        if (rb_node == nullptr)
            return BLACK;

        return rb_node->color;
    }

    void set_Color(RB_Node<T>*& rb_node, int color)
    {
        if (rb_node == nullptr)
            return;
        rb_node->color = color;
    }

    RB_Node<T>* min_Value_Node(RB_Node<T>*& rb_node)
    {

        RB_Node<T>* ptr = rb_node;

        while (ptr->left != nullptr)
            ptr = ptr->left;

        return ptr;
    }

    RB_Node<T>* max_Value_Node(RB_Node<T>*& rb_node)
    {
        RB_Node<T>* ptr = rb_node;

        while (ptr->right != nullptr)
            ptr = ptr->right;

        return ptr;
    }

    RB_Node<T>* insertBST(RB_Node<T>*& root, RB_Node<T>*& ptr, string path, string data)
    {
        if (root == nullptr)
            return ptr;

        if (ptr->data < root->data)
        {
            root->left = insertBST(root->left, ptr, path, data);
            root->left->parent = root;
        }

        else if (ptr->data > root->data)
        {
            root->right = insertBST(root->right, ptr, path, data);
            root->right->parent = root;
        }
        return root;
    }

    RB_Node<T>* delete_BST(RB_Node<T>*& root, T data)
    {
        if (root == nullptr)
            return root;

        if (data < root->data)
            return delete_BST(root->left, data);

        if (data > root->data)
            return delete_BST(root->right, data);

        if (root->left == nullptr || root->right == nullptr)
            return root;

        RB_Node<T>* temp = min_Value_Node(root->right);
        root->data = temp->data;
        return delete_BST(root->right, temp->data);
    }

    int get_Black_Height(RB_Node<T>* rb_node)
    {
        int blackheight = 0;
        while (rb_node != nullptr) {
            if (get_Color(rb_node) == BLACK)
                blackheight++;
            rb_node = rb_node->left;
        }
        return blackheight;
    }

    void fix_Insert_RB_Tree(RB_Node<T>*& ptr)
    {
        RB_Node<T>* parent = nullptr;
        RB_Node<T>* grandparent = nullptr;
        while (ptr != root && get_Color(ptr) == RED && get_Color(ptr->parent) == RED) {
            parent = ptr->parent;
            grandparent = parent->parent;
            if (parent == grandparent->left) {
                RB_Node<T>* uncle = grandparent->right;
                if (get_Color(uncle) == RED) {
                    set_Color(uncle, BLACK);
                    set_Color(parent, BLACK);
                    set_Color(grandparent, RED);
                    ptr = grandparent;
                }
                else {
                    if (ptr == parent->right) {
                        rotate_Left(parent);
                        ptr = parent;
                        parent = ptr->parent;
                    }
                    rotate_Right(grandparent);
                    swap(parent->color, grandparent->color);
                    ptr = parent;
                }
            }
            else {
                RB_Node<T>* uncle = grandparent->left;
                if (get_Color(uncle) == RED) {
                    set_Color(uncle, BLACK);
                    set_Color(parent, BLACK);
                    set_Color(grandparent, RED);
                    ptr = grandparent;
                }
                else {
                    if (ptr == parent->left) {
                        rotate_Right(parent);
                        ptr = parent;
                        parent = ptr->parent;
                    }
                    rotate_Left(grandparent);
                    swap(parent->color, grandparent->color);
                    ptr = parent;
                }
            }
        }
        set_Color(root, BLACK);
    }

    void insert_Value(T n, string path, string data)
    {
        RB_Node<T>* rb_node = new RB_Node<T>(n, path, data);
        root = insertBST(root, rb_node, path, data);
        fix_Insert_RB_Tree(rb_node);
    }

    void delete_Value(T data)
    {
        RB_Node<T>* rb_node = delete_BST(root, data);
        fix_Delete_RB_Tree(rb_node);
    }

    RB_Node<T>* getroot()
    {
        return root;
    }

    void inorder()
    {
        inorder_BST(root);
    }

    void preorder()
    {
        preorderBST(root);
        cout << "\n----------------------\n";
    }
};


#endif //RED_BLACK_TREE_RBTREE_H
