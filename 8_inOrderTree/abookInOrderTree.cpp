/*****************************************************************************
* Filename: abookInOrderTree.cpp
* 
* Description: 
*	
* This program adds to a stack for ABook object and then removes the list,
* printing along the way.
*
* Company: Park University
* Author: Aaron P. Clark
* Email: aaron.clark@park.edu
* Date: 7/19/2014
* Last Change: 7/20/2014 
******************************************************************************/

#include <iostream>

#include <string>

#include <cstdlib>

using namespace std;

// Node class

class Node {

    int key;

    Node* left;

    Node* right;

public:

    Node() { key=-1; left=NULL; right=NULL; };

    void setKey(int aKey) { key = aKey; };

    void setLeft(Node* aLeft) { left = aLeft; };

    void setRight(Node* aRight) { right = aRight; };

    int Key() { return key; };

    Node* Left() { return left; };

    Node* Right() { return right; };

};

// Tree class

class Tree {

     Node* root;

public:

     Tree();

     ~Tree();

     Node* Root() { return root; };

     void addNode(int key);

     void inOrder(Node* n);

     void preOrder(Node* n);

     void postOrder(Node* n);

private:

     void addNode(int key, Node* leaf);

     void freeNode(Node* leaf);

};

// Constructor

Tree::Tree() {

     root = NULL;

}

// Destructor

Tree::~Tree() {

     freeNode(root);

}

// Free the node

void Tree::freeNode(Node* leaf)

{

    if ( leaf != NULL )

    {

       freeNode(leaf->Left());

       freeNode(leaf->Right());

       delete leaf;

    }

}

// Add a node

void Tree::addNode(int key) {

     // No elements. Add the root

     if ( root == NULL ) {

        cout << "add root node ... " << key << endl;

        Node* n = new Node();

        n->setKey(key);

        root = n;

     }

     else {

       cout << "add other node ... " << key << endl;

       addNode(key, root);

     }

}

// Add a node (private)

void Tree::addNode(int key, Node* leaf) {

    if ( key <= leaf->Key() ) {

       if ( leaf->Left() != NULL )

          addNode(key, leaf->Left());

       else {

          Node* n = new Node();

          n->setKey(key);

          leaf->setLeft(n);

       }

    }

    else {

       if ( leaf->Right() != NULL )

          addNode(key, leaf->Right());

       else {

          Node* n = new Node();

          n->setKey(key);

          leaf->setRight(n);

       }

    }

}

// Print the tree in-order

// Traverse the left sub-tree, root, right sub-tree

void Tree::inOrder(Node* n) {

    if ( n ) {

       inOrder(n->Left());

       cout << n->Key() << " ";

       inOrder(n->Right());

    }

}

// Test main program

int main() {

   Tree* tree = new Tree();

   tree->addNode(35);

   tree->addNode(18);

   tree->addNode(48);

   tree->addNode(72);

   tree->addNode(60);

   tree->addNode(25);

   cout << "In order traversal" << endl;

   tree->inOrder(tree->Root());

   cout << endl;

   system("PAUSE");

   delete tree;

  

   return 0;

  

}