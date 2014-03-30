#include<iostream>
using namespace std;

class BinPacking{

	public:
		BinPacking(int n) 
		{
			numBin = n;
			
			binNumberArray = new int[numBin];
		}
		~BinPacking() {}
		void firstFitPack(int *objectSize, int numberOfObjects, int binCapacity);
   		void bestFitPack(int *objectSize, int numberOfObjects, int binCapacity);
		void printBinSequence()
		{
			for(int i=0;i<numBin;i++)
				cout<< binNumberArray[i]<< " ";
			cout<<endl;
		}

	private:
		//store bin numbers
		int *binNumberArray;
		//number of bins
		int numBin;
		


   
};