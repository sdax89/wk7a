#include <iostream>
#include"BinaryTree.h"
#include"IntBinaryTree.h"
using namespace std;

// Savannah Mills
// CISS 243
// wk7 project
// August 2019
// Chapter 21 #3 Leaf Counter

/*
Write a member function, for either the template you designed in Programming Challenge 1 or the IntBinaryTree class,
	that counts and returns the number of leaf nodes in the tree. 
Demonstrate the function in a driver program.
*/



int main()
{
	BinaryTree<char> tree;

	cout << "Inserted nodes. " << endl;
	tree.insertNode('G');
	tree.insertNode('J');
	tree.insertNode('C');
	tree.insertNode('U');
	tree.insertNode('F');
	tree.insertNode('D');
	tree.insertNode('B');

	// Displaying leafnodes count
	cout << "number of leaf nodes" << tree.countNodes() << endl;
	
	// display in order
	cout << "\nInorder traversa: \n";
	tree.displayInOrder();

	// display preorder
	cout << "\nPreorder traversal:\n";
	tree.displayPreOrder();

	// display postorder
	cout << "\nPostorder traversal: \n";
	tree.displayPostOrder();

	// search for the value f
	if (tree.searchNode(2))
		cout << "\nF is found in the tree.\n";
	else
		cout << "\nF was not found in the tree.\n";
	
	// search for the value c
	if (tree.searchNode('C'))
		cout << "\nC is found in the tree.\n";
	else

		cout << "\nC was not found in the tree.\n";



	//display the values

	cout << "\nHere are the values in the tree: \n";

	tree.displayInOrder();



	// delete the value D

	cout << "\nDeleting D...\n";

	tree.remove('D');



	// delete the value G

	cout << "\nDeleting G...\n";

	tree.remove('G');



	// display the values

	cout << "\nNow, here are the nodes: \n";

	tree.displayInOrder();

	// leaf nodes after deletion

	cout << "Number of leaf nodes" << tree.Leafs() << endl << endl;



	system("pause");

	return 0;

}