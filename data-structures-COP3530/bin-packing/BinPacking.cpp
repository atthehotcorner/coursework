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
	/*MaxWinnerTree mwtree = new MaxWinnerTree();

	// players - number of bins
	// value of player - capacity

	// init the maxwintree
	mwtree.initialize(1, binCapacity);

	/* idea of firstfitpack without tree
	int binNum = 0;

	int *currentBin = new int[binCapacity];
	int currentBinSum = 0;

	for (int i = 1; i <= numberOfObjects; i++) {
		if
		objectSize[i-1];
	}*/
		
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
   	 
void BinPacking::bestFitPack(int *objectSize, int numberOfObjects, int binCapacity)
{
	cout << "== bin cap is " << binCapacity << " ==" << endl;
	cout << "object set is { " << objectSize << " } with total number of " << numberOfObjects << endl << endl;

	// make bst ref
	BinarySearchTree *bst;

	// insert all objects
	for (int i = 1; i <= numberOfObjects; i++) {
		cout << "== object " << i << " size is " << objectSize[i-1] << " ==" << endl;

		// 1st, make new tree
		if (i == 1) {
			// init bins to one bin
			numBin = 1;
			binNumberArray = new int[numBin];

			// make new tree
			bst = new BinarySearchTree(binCapacity - objectSize[i - 1]);
			binNumberArray[i - 1] = binCapacity - objectSize[i - 1];

			cout << "new tree, now using bin " << numBin << ", insert " << objectSize[i - 1] << endl;
		}
		// yes there is bin that fits
		else if (bst->find(objectSize[i - 1]) != NULL || bst->root->capacity >= objectSize[i - 1]) {
			int foundBinNumber = 0;

			// check if root has cap (error with overwriting root, root is protected)
			if (bst->root->capacity >= objectSize[i - 1]) {
				foundBinNumber = 1;
				bst->erase(bst->root);

				// update capacity
				int newCapacity = binNumberArray[foundBinNumber - 1] - objectSize[i - 1];
				if (newCapacity != 0) bst->insert(binNumberArray[foundBinNumber - 1] - objectSize[i - 1], foundBinNumber);
				binNumberArray[foundBinNumber - 1] = newCapacity;
			}
			// not, find in tree
			else {
				BinaryTreeNode *bin = bst->find(objectSize[i - 1]);
				foundBinNumber = bin->binNumber; // ugh needed to change index offset this whole time

				// update capacity
				int newCapacity = binNumberArray[foundBinNumber - 1] - objectSize[i - 1];
				bin->capacity = newCapacity;
				binNumberArray[foundBinNumber - 1] = newCapacity;

				// remove bin from bst if cap is now zero
				if (newCapacity == 0) bst->erase(bin);
			}

			cout << "yes has bin, now using bin " << foundBinNumber << ", insert " << objectSize[i - 1] << endl;
		}
		// there is no bin that can fit
		else {
			// make new bin, incement numBin by one and enlarge int array
			numBin++;
			int *newBinNumberArray = new int[numBin];
			for (int j = 1; j < numBin; j++) {
				newBinNumberArray[j - 1] = binNumberArray[j - 1];
			}
			newBinNumberArray[i - 1] = objectSize[i - 1];
			binNumberArray = newBinNumberArray;

			// insert into bst if not max cap filled
			if (objectSize[i - 1] < binCapacity) bst->insert(binCapacity - objectSize[i - 1], numBin);

			cout << "no bin found, now using bin " << numBin << ", insert " << objectSize[i - 1] << endl;
		}


		// debug print bin
		for (int i = 0; i<numBin; i++) cout << binNumberArray[i] << "\t";
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