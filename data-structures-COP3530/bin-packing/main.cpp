#include <iostream>
#include<fstream>
#include <stddef.h>
#include "BinPacking.h"
#include "BinaryTreeNode.h"
using namespace std;



int main (){
	
	
	//number of bins`
	int num;
	//capacity of bin
	int size;
	ifstream infile;
	infile.open("inputFile.txt");
	infile >> num;
	infile >> size;
	int* objectSize = new int[num];
	int x;
	for(int j = 0; j < num; j++)
	{
		infile >> x;
		objectSize[j] = x;
	}
	
	BinPacking* b = new BinPacking(num);

	//call firstfit
	cout<< "Using First Fit Packing .... " <<endl<<endl;

	b->firstFitPack(objectSize, num, size);

	
	b->printBinSequence();

	cout<< endl << "Using Best Fit Packing .... " <<endl<<endl;

	////call bestfit
	b->bestFitPack(objectSize, num, size);

	b->printBinSequence();
	
}