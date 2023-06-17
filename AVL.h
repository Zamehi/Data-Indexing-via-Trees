#pragma once
#include<iostream>
#include "function.h"
using namespace std;
template<class t>
struct node
{
public :

    //each nodes contains 4 items left,right,data and height
    node* left;
    t data;//the data that will be stored in a node
    int height;//the height of the node
    node* right;
    string path;

    
    
    node()//default consturctor that sets all variables to deafult values
    {
        right = NULL;
        left  = NULL;
        height = -1;
        //data = NULL;
    }
    template<class t>
    node* create(t val, string path, string data)//this function creates a new nodes with data that is passed in 
        //the parameter and returns the address of the newly created node
    {
        node<t>* temp = new node<t>;//creating new node dynamically
        temp->data = val;//setting the value
        temp->path = path;
        temp->left = NULL;
        temp->right = NULL;
        temp->height = 1;
        insert_in_txt(data,path);// inseted data of the node 
        return temp;

    }

};
template<class t>
class AVL
{
public:
    node<t>* root;
    AVL()//default constructor of AVL class
    {
        root = NULL;
    }
    int max(int  a, int b)//function finds the maximum between two values and returns it
    {
        if (a > b)
            return a;
        else
            return b;

    }
    int Balance(node<t>* a)//function calculation the balance factor of a node and returns it
    {
        int bal;
        if (a == NULL)
            return 0;
        else
        {
            bal = height(a->left) - height(a->right);//formula to find balance factor of a node
            return bal;
        }
    }
    int height(node<t>* n)//function returns the height of a node
    {
        if (n == NULL)//if tree is empty the height will be -1
            return -1;
        else
            return n->height;
    }
    bool empty()//checks if the tree is empty or not
    {
        if (root == NULL)
            return true;
        else
            return false;
    }
    node<t>* rightrot(node<t>* n)//does right rotation on the node passes and returns the action node
    {
        node<t>* c = n->left;//makes a node c and makes it equal to left of the passed node
        node<t>* a = c->right;//makes a node a ans makes it equal to the right of c
        c->right = n;//now rotating
        n->left = a;
        //updating the heights of n and c after rotating
        n->height = max(height(n->left), height(n->right)) + 1;
        c->height = max(height(c->left), height(c->right)) + 1;
        //returning c which is the action node
        return c;
    }
    node<t>* leftrot(node<t>* n)//does left rotation
    {
        node<t>* a = n->right;//makes a node a and make it equal to the left of n
        node<t>* t1 = a->left;//makes a node t and assigns it some value
        //performing rotaing
        n->right = t1;
        a->left = n;
        //updating heights after rotatoin
        n->height = max(height(n->left), height(n->right)) + 1;
        a->height = max(height(a->left), height(a->right)) + 1;
        //returning a after rotation
        return a;
    }
    node<t>* insert(node<t>* Node, t val, string path, string data)
    {
        if (Node == NULL)//if tree is empty 
        {
            return Node->create(val, path, data);//creating node
        }

        if (val < Node->data)//if value of the new node is smaller then create it on left
        {

            Node->left = insert(Node->left, val, path, data);
        }
        if (val > Node->data)//if value of the new node is greater then create it on right
        {

            Node->right = insert(Node->right, val, path, data);
        }
        Node->height = max(height(Node->left), height(Node->right)) + 1;//updating height 
        int b = Balance(Node);//checking balance of the node
        if (b > 1)//if balance is greater than 1 
        {
            if (val < Node->left->data)
                return rightrot(Node);//performing right rotation
            if (val > Node->left->data)
            {
                Node->left = leftrot(Node->left);//performing left rotation
                return rightrot(Node);//performing right rotation
            }


        }
        else if (b < -1) //if balance is less than -1 
        {
            if (val > Node->right->data)
                return leftrot(Node);//performing left rotation
            if (val < Node->right->data)
            {
                Node->right = rightrot(Node->right);//performing right rotation
                return leftrot(Node);//performing left rotation
            }

        }
        return Node;


    }
    node<t>* min(node<t>* N)//finds the node with the minimum value
    {
        node<t>* a = N;

        while (a->left != NULL)
            a = a->left;

        return a;
    }
    void print(node<t>* root)//prints the values in a tree
    {
        if (root != NULL)
        {
            cout << root->data << "  ";
            print(root->left);
            print(root->right);
        }
    }

    node<t>* deletenode(node<t>* root, t val)
    {


        if (root == NULL)//if tree is empty
            return root;
        else if (val < root->data)//if val is smaller then recursively call 
            root->left = deletenode(root->left, val);
        else if (val > root->data)//if val is greater then recursively call
            root->right = deletenode(root->right, val);
        else {

            if (root->left == NULL && root->right == NULL)//no child case

            {
                node<t>* t3 = root;
                root = NULL;
            }

            else if (root->left == NULL)//if left is NULL
            {
                node<t>* t4 = root->right;
                delete root;
                return t4;

            }
            else if (root->right == NULL)//if right is null of a node
            {
                node<t>* t5 = root->left;
                delete root;
                return t5;

            }

            else//if node has two kids
            {
                node<t>* t2 = min(root->right);//finding min in right subtree
                root->data = t2->data;
                root->right = deletenode(root->right, t2->data);
            }
        }
        if (root == NULL)
            return root;
        root->height = 1 + max(height(root->left), height(root->right));//updating height
        int balance = Balance(root);//checking balance and performing rotations
        if (Balance(root->left) >= 0 && balance > 1)
            return rightrot(root);

        if (Balance(root->right) <= 0 && balance < -1)
            return leftrot(root);
        if (balance < -1 && Balance(root->right) > 0)
        {
            root->right = rightrot(root->right);
            return leftrot(root);
        }
        if (Balance(root->left) < 0 && balance > 1)
        {
            root->left = leftrot(root->left);
            return rightrot(root);
        }

        return root;
    }



};