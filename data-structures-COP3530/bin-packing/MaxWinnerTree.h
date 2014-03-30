#ifndef BINARYTREE
#define BINARYTREE
#include "BinaryTree.h"
#endif

#ifndef BINARYTREENODE
#define BINARYTREENODE
#include "BinaryTreeNode.h"
#endif

class MaxWinnerTree : public BinaryTree{
	public:
		MaxWinnerTree();
		~MaxWinnerTree() {}
		//initialize the maxwinner tree
		void initialize(int objects, int capacity);
		//replay to rebuild the winner tree
        void replay(BinaryTreeNode* n);
		//find the bin with given objectsize, returns the binarytree node
       BinaryTreeNode* find(int objectSize);
       protected:
       int numberOfPlayers;
};