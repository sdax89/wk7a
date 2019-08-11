#pragma once
#ifndef INTBINARYTREE_H
#define INTBINARYTREE_H

// header file section
#include <iostream>
using namespace std;

// template<class T>


class IntBinaryTree
{
private:
	struct TreeNode
	{
		int value;          // the value in the node
		TreeNode *left;     // pointer left child node
		TreeNode *right;    // pointer to right child node
	};

	TreeNode *root;			// pointer to the root node

	// private member functions
	void insert(TreeNode *&, TreeNode *&);
	void destroySubTree(TreeNode *);
	void deleteNode(int, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *) const;
	void displayPreOrder(TreeNode *) const;
	void displayPostOrder(TreeNode *) const;
	int LeafCount(TreeNode *);
	   
public:
	// constructor
	IntBinaryTree()
	{
		root = NULL;
	}

	// destructor
	~IntBinaryTree()
	{
		destroySubTree(root);
	}


	// binary tree operations
	void insertNode(int);
	void destroySubTree(TreeNode *nodePtr);
	bool searchNode(int);
	void remove(int);
	void displayInOrder() const
	{
		displayPreOrder(root);
	}
	void displayPostOrder() const
	{
		displayPostOrder(root);
	}
	int Leafs()
	{
		int l = LeafCount(root);
		return 1;
	}
};
#endif
