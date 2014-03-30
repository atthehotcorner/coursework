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
	MaxWinnerTree mwtree = new MaxWinnerTree();

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

	// init bins to one bin
	numBin = 1;
	binNumberArray = new int[numBin];

	// make new bst
	BinarySearchTree bst = new BinarySearchTree(binCapacity);

	// insert all objects
	for (int i = 1; i <= numberOfObjects; i++) {
		// there is no bin that can fit
		if (!bst.find(objectSize[i - 1])) {
			bst.insert(binCapacity, );
		}
		// yes there is bin that fits
		else {
			int returnedBinNum = bst.find(objectSize[i - 1]);
		}

	}
	bst.find(objectSize[i]);


	/*
	Binary Search Tree

	where objectSize is the array of objects to be packed, numberofObjects is the number of Objects to be
	packed, binCapacity is the capacity of each bin.

 Items are packed one at a time in the given order.
 To determine the bin for an item, rst determine the set S of bins into which the item ts.
 If S is empty, then start a new bin and pack the item into this new bin.
 Otherwise, pack the item into the (in S) that has the least available capacity. If there is a tie, beak it with smallest binNumber.
 Use a Binary Search Tree to implement the Best Fit Algorithm for the same series of numbers.
	*/
	
}