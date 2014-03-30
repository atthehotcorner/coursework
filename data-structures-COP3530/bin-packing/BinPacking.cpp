#ifndef MAXWINNERTREE
#define MAXWINNERTREE
#include "MaxWinnerTree.h"
#endif

#ifndef BINARYSEARCHTREE
#define BINARYSEARCHTREE
#include "BinarySearchTree.h"
#endif

#ifndef BINARYTREENODE
#define BINARYTREENODE
#include "BinaryTreeNode.h"
#endif

#ifndef BINPACKING
#define BINPACKING
#include "BinPacking.h"
#endif
#include <stddef.h>
#include <iostream>
using namespace std;

void BinPacking::firstFitPack(int *objectSize, int numberOfObjects, int binCapacity)
{
	// new nwtree
	MaxWinnerTree *mwtree = new MaxWinnerTree();

	// players - number of bins
	// value of player - capacity
	// init the maxwintree
	mwtree->initialize(numBin, binCapacity);

	for (int i = 0; i < numberOfObjects; i++) {
		cout << "==i is " << i << "==" << endl;
		BinaryTreeNode* currentObject = mwtree->find(objectSize[i]);
		binNumberArray[i] = currentObject->binNumber;
		cout << "We want to store object " << objectSize[i] << ", bin " << currentObject->binNumber << " found with cap of " << currentObject->capacity << endl;

		// change capacity and replay parent match
		currentObject->capacity -= objectSize[i];
		mwtree->replay(currentObject->parent);
	}
		
	/*
	Max Winner tree

	where objectSize is the array of objects to be packed, numberofObjects is the number of Objects to be
	packed, binCapacity is the capacity of each bin.

 Bins are arranged in left to right order.
 Items are packed one at a time in the given order.
 The current item is packed into leftmost bin into which it ts.
 If there is no bin into which current item ts, start a new bin.
 Use a Max Winner tree to implement the First Fit Algorithm for the same series of numbers.
	*/

}

/*BinarySearchTree* BinPacking::removeRoot(BinarySearchTree* bst) {

}*/

void BinPacking::bestFitPack(int *objectSize, int numberOfObjects, int binCapacity)
{
	cout << "== bin cap is " << binCapacity << " ==" << endl;

	// Make BST stub
	BinarySearchTree *bst = NULL;
	int openBin = 1;

	// insert all objects
	for (int i = 1; i <= numberOfObjects; i++) {
		cout << "== object " << i << " size is " << objectSize[i-1] << " ==" << endl;

		// Make tree if needed
		if (bst == NULL && objectSize[i - 1] < binCapacity) bst = new BinarySearchTree(binCapacity - objectSize[i - 1]);

		// No bin fits object
		if (!bst->find(objectSize[i - 1])) {
			cout << "no fit" << endl;
			// Modify array
			binNumberArray[i - 1] = openBin;

			// Insert into BST if capacity not reached
			if (objectSize[i - 1] < binCapacity) bst->insert(binCapacity - objectSize[i - 1], openBin);

			openBin++;
		}
		// Yes there is bin that fits object
		else {
			cout << "yes fit" << endl;
			BinaryTreeNode *bin = bst->find(objectSize[i - 1]);
			int foundBinNumber = bin->binNumber;
			binNumberArray[i - 1] = foundBinNumber;

			// Update capacity
			int newCapacity = bin->capacity - objectSize[i - 1];
			bin->capacity = newCapacity;

			// Remove bin from BST if capacity is now zero
			if (newCapacity == 0) bst->erase(bin);
		}

		// debug print bin
		for (int i = 0; i<numBin; i++) cout << "(" << binNumberArray[i] << ")\t";
		cout << endl;
		for (int j = 0; j<numberOfObjects; j++) cout << objectSize[j] << "\t";
		cout << endl;
	}

	/*
	Binary Search Tree

	where objectSize is the array of objects to be packed, numberofObjects is the number of Objects to be
	packed, binCapacity is the capacity of each bin.

	 Items are packed one at a time in the given order.
	 To determine the bin for an item, first determine the set S of bins into which the item fits.
	 If S is empty, then start a new bin and pack the item into this new bin.
	 Otherwise, pack the item into the (in S) that has the least available capacity. If there is a tie, beak it
	with smallest binNumber.
	 Use a Binary Search Tree to implement the Best Fit Algorithm for the same series of numbers.
	*/
	
}