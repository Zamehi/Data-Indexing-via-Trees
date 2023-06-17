#pragma once
#include <iostream>
using namespace std;

// ****************************** Internal node 
template<class T>
struct b_node
{
	int* keys;        // Number of data stored
	string* paths;    // Number will be keys + 1, will store the data against id
	b_node<T> ** children; // Number of ways 
	bool leaf;
	int number_of_keys;

public:

	//                           CONSTRUCTOR 
	b_node(int t, bool ileaf)
	{
		// Copy the given minimum degree and leaf property
		t = _t;
		this->leaf = ileaf;

		// Allocate memory for maximum number of possible keys
		// and child pointers
		// keys = new int[2 * t - 1];
		// child pointers 
		nodes = new b_node<T>*[4];

		// Initialize the number of keys as 0
		n = 0;
	}
};



// B_Tree 
template<class T>
class b_tree
{
private:
	// Reference pointers array (linked list)
	b_node* root;
	int height;
	int size;



public:
	// Constructor
	b_tree(b_root_node* t = NULL, int s = 0, int h = -1)
	{
		this->root = t;
		this->height = h;
		this->size = s;

	}
	//	 ``// Searching function
	b_node <T>* search(T value)
	{

	}

	// Insert Function
	void insert()
	{

		if (root == NULL)
		{
			b_root_node<T>* temp;
			this->root = temp;
		}
		else
		{
			// check if the node has space or not 
			b_node<T>* temp;
		}
	}


};