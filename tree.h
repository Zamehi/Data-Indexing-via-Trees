#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "function.h"
using namespace std;



//------------------------   |\   | ----   ---   ----  --------------------
// -----------------------   | \  | |   | |   \  |__   --------------------
// -----------------------   |  \ | |   | |    | |     --------------------
// -----------------------   |   \| |___| |___/  |___  --------------------

// **************************************** B tree Node <T> ************************************ 
template <class T>
class Node 
{
private :
    string path ;  // all keys data will be stored in one file i.e txt
    T* keys;
    int degree;
    Node <T>** child_pointers;
    int keys_in_node;  // nno. of keys in node 
    bool leaf;

public:
    // ***********************************   Constructor  ********************************** 

    Node <T>(int ways, bool leaf, string path, string data) 
    {
        this->path = path;
        degree = ways;
        this->leaf = leaf;  // If leaf then true

        keys = new T[2 * degree - 1];                   // 9
        child_pointers = new Node <T> * [2 * degree];   // 10 way tree 

        keys_in_node = 0;
    }

    // ***********************************   SPLIT CHILD  **********************************
    // split the child

    void splitChild(int i, Node <T>* y)
    {
        Node <T>* z = new Node <T>(y->degree, y->leaf, "", "");
        z->keys_in_node = degree - 1; // 5

        for (int j = 0; j < degree - 1; j++)
        {
            z->keys[j] = y->keys[j + degree];
        }

        // If the node to be splitted is not a leaf
        if (y->leaf == false)
        {
            for (int j = 0; j < degree; j++)
            {
                z->child_pointers[j] = y->child_pointers[j + degree];
            }
        }

        y->keys_in_node = degree - 1;

        for (int j = i+1; j<=keys_in_node; j++)
        {
            child_pointers[j + 1] = child_pointers[j];
        }
            

        child_pointers[i + 1] = z;

        for (int j = keys_in_node - 1; j >= i; j--)
            keys[j + 1] = keys[j];

        keys[i] = y->keys[degree - 1];
        z->keys_in_node = z->keys_in_node + 1;
    }

    // ***********************************   INSERTION    **********************************
    // Insert non full condition
    void insert_again(int k) 
    {
        int i = keys_in_node - 1;

        if (leaf == true) 
        {
            while (i >= 0 && keys[i] > k) 
            {
                keys[i + 1] = keys[i];
                i--;
            }

            keys[i + 1] = k;
            keys_in_node = keys_in_node + 1;
        }
        else 
        {
            while (i >= 0 && keys[i] > k)
                i--;

            if (child_pointers[i + 1]->keys_in_node == 2 * degree - 1) // full node 
            {
                splitChild(i + 1, child_pointers[i + 1]);

                if (keys[i + 1] < k)
                {
                    i++;
                }
            }
            child_pointers[i + 1]->insert_again(k);
        }
    }


    

    // ***********************************    TRAVERSE    **********************************
    // Traverse the nodes
    void traverse() 
    {
        int i;
        for (i = 0; i < keys_in_node; i++) {
            if (leaf == false)
                child_pointers[i]->traverse();
            cout << " " << keys[i];
        }

        if (leaf == false)
            child_pointers[i]->traverse();
    }


    // ***********************************   FIND KEY   *******************
    // Find the key
    int findKey(int k) 
    {
        int idx = 0;
        while (idx < keys_in_node && keys[idx] < k)
            ++idx;
        return idx;
    }
    

    // **********************************   DELETION   *************************
    // Deletion operation
    void deletion(int k) 
    {
        int idx = findKey(k);

        if (idx < keys_in_node && keys[idx] == k) {
            if (leaf)
                removeFromLeaf(idx);
            else
                removeFromNonLeaf(idx);
        }
        else {
            if (leaf) {
                cout << "The key " << k << " is does not exist in the tree\keys_in_node";
                return;
            }

            bool flag = ((idx == keys_in_node) ? true : false);

            if (child_pointers[idx]->keys_in_node < degree)
                fill(idx);

            if (flag && idx > keys_in_node)
                child_pointers[idx - 1]->deletion(k);
            else
                child_pointers[idx]->deletion(k);
        }
        return;
    }


    // *********************************   DELETE LEAF   *********
    // Remove from the leaf
    void removeFromLeaf(int idx) {
        for (int i = idx + 1; i < keys_in_node; ++i)
            keys[i - 1] = keys[i];

        keys_in_node--;

        return;
    }


    // ********************************    DELETE NON LEAF   ******************
    // Delete from non leaf node
    void removeFromNonLeaf(int idx) 
    {
        int k = keys[idx];

        if (child_pointers[idx]->keys_in_node >= degree) {
            int pred = getPredecessor(idx);
            keys[idx] = pred;
            child_pointers[idx]->deletion(pred);
        }

        else if (child_pointers[idx + 1]->keys_in_node >= degree) {
            int succ = getSuccessor(idx);
            keys[idx] = succ;
            child_pointers[idx + 1]->deletion(succ);
        }

        else {
            merge(idx);
            child_pointers[idx]->deletion(k);
        }
        return;
    }


    // *******************************    GET PREDECESSOR   ************************
    // Get Predecessor 
    int getPredecessor(int idx) 
    {
        Node <T>* cur = child_pointers[idx];
        while (!cur->leaf)
            cur = cur->child_pointers[cur->keys_in_node];

        return cur->keys[cur->keys_in_node - 1];
    }


    // ******************************     GET SUCCESSOR  ********************
    int getSuccessor(int idx) 
    {
        Node <T>* cur = child_pointers[idx + 1];
        while (!cur->leaf)
            cur = cur->child_pointers[0];

        return cur->keys[0];
    }

/*
    // ******************************     FILLING    *********
    void fill(int idx) 
    {
        if (idx != 0 && child_pointers[idx - 1]->keys_in_node >= degree)
            borrowFromPrev(idx);

        else if (idx != keys_in_node && child_pointers[idx + 1]->keys_in_node >= degree)
            borrowFromNext(idx);

        else {
            if (idx != keys_in_node)
                merge(idx);
            else
                merge(idx - 1);
        }
        return;
    }
    */
    /*
    // ******************************    PREVIOUS BORROW    *****************
    // Borrow from previous
    void borrowFromPrev(int idx) {
        Node <T>* child = child_pointers[idx];
        Node <T>* sibling = child_pointers[idx - 1];

        for (int i = child->keys_in_node - 1; i >= 0; --i)
            child->keys[i + 1] = child->keys[i];

        if (!child->leaf) {
            for (int i = child->keys_in_node; i >= 0; --i)
                child->child_pointers[i + 1] = child->child_pointers[i];
        }

        child->keys[0] = keys[idx - 1];

        if (!child->leaf)
            child->child_pointers[0] = sibling->child_pointers[sibling->keys_in_node];

        keys[idx - 1] = sibling->keys[sibling->keys_in_node - 1];

        child->keys_in_node += 1;
        sibling->keys_in_node -= 1;

        return;
    }


    // ******************************    borrow from next 
    // Borrow from the next
    void borrowFromNext(int idx) 
    {
        Node <T>* child = child_pointers[idx];
        Node <T>* sibling = child_pointers[idx + 1];

        child->keys[(child->keys_in_node)] = keys[idx];

        if (!(child->leaf))
            child->child_pointers[(child->keys_in_node) + 1] = sibling->child_pointers[0];

        keys[idx] = sibling->keys[0];

        for (int i = 1; i < sibling->keys_in_node; ++i)
            sibling->keys[i - 1] = sibling->keys[i];

        if (!sibling->leaf) {
            for (int i = 1; i <= sibling->keys_in_node; ++i)
                sibling->child_pointers[i - 1] = sibling->child_pointers[i];
        }

        child->keys_in_node += 1;
        sibling->keys_in_node -= 1;

        return;
    }

    
    // ******************************    MERGING   **************************
    // Merge
    void merge(int idx) {
        Node <T>* child = child_pointers[idx];
        Node <T>* sibling = child_pointers[idx + 1];

        child->keys[degree - 1] = keys[idx];

        for (int i = 0; i < sibling->keys_in_node; ++i)
            child->keys[i + degree] = sibling->keys[i];

        if (!child->leaf) {
            for (int i = 0; i <= sibling->keys_in_node; ++i)
                child->child_pointers[i + degree] = sibling->child_pointers[i];
        }

        for (int i = idx + 1; i < keys_in_node; ++i)
            keys[i - 1] = keys[i];

        for (int i = idx + 2; i <= keys_in_node; ++i)
            child_pointers[i - 1] = child_pointers[i];

        child->keys_in_node += sibling->keys_in_node + 1;
        keys_in_node--;

        delete (sibling);
        return;
    }
    */

    friend class BTree;
};

//------------------------   -------  ---   ----  ----  --------------------
// -----------------------      |     |__|  |__   |__   --------------------
// -----------------------      |     |\    |     |     --------------------
// -----------------------      |     | \   |___  |___  --------------------

template <class T>
class BTree 
{
private:
    Node <T>* root;
    int degree;// number of ways by 2 
    int nodes;
    string data_to_insert;

public:
    BTree(int ways = 0) 
    {
        root = NULL;
        degree = ways;
        nodes = 0;
    }
    void set_data_to_insert(string data) 
    {

    }
    void traverse()
    {
        if (root != NULL)
            root->traverse();
    }

    // **************************** INSERT A NODE ****************************
    // Insert the node
    void insert(T num, string p, string data) 
    {
        // T k is data to be inserted on node 
        // data is the one to be inserted in the txt file 
        if (root == NULL) 
        {
            nodes++;

            // figuring ou name of the file 
            p.push_back(nodes + 48);
            p.append(".txt");

            // store data in the txt file 
            insert_in_txt(data, p);
            root = new Node <T>(degree, true,  p, data);

            root->keys[0] = num;
            // insert 
            root->keys_in_node = 1;
            
        }
        else 
        {
            if (root->keys_in_node == (2 * degree) - 1)  // If keys in root are maxximum
            {
                // create new node 
                Node <T>* temp = new Node <T>(degree, false);

                temp->child_pointers[0] = root;

                temp->splitChild(0, root);// splitting root 

                int i = 0;
                if (temp->keys[0] < num)
                    i++;

                //Inserting data in the new node  
                temp->child_pointers[i]->insert_again(num);

                root = temp;
            }
            else
                root->insert_again(num);  // Nodes are not increasing 
        }
    }


    // ****************************   DELETION   *****************************
    // Delete Operation
    void deletion(int num) 
    {
        if ( root == NULL) // !root
        {
            cout << "The tree is empty\keys_in_node";
            return;
        }

        root->deletion(num);

        if (root->keys_in_node == 0) 
        {
            Node <T>* temp = root;
            if (root->leaf == true) 
            {
                root = NULL;
            }
                
            else
                root = root->child_pointers[0];

            delete temp;
        }
        return;
    }

};




/*
int main() 
{
    BTree    degree(3);
    degree.insert(8);
    degree.insert(9);
    degree.insert(10);
    degree.insert(11);
    degree.insert(15);
    degree.insert(16);
    degree.insert(17);
    degree.insert(18);
    degree.insert(20);
    degree.insert(23);

    cout << "The B-tree is: ";
    degree.traverse();

    degree.deletion(20);

    cout << "\nThe B-tree is: ";
    degree.traverse();
}*/
