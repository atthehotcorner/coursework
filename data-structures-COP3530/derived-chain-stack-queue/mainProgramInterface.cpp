#include <iostream>
#include<stdlib.h>
#include<fstream>
#include "mainProgramInterface.h"
#include "derivedChainStack.h"
#include "derivedChainQueue.h"
 
using namespace std; 

bool mainProgramInterface :: checkPalindrome(long theNumber)
{

	long n = theNumber;
	derivedChainQueue* newQueue = new derivedChainQueue();

	// Add each digit to the stack
	do {
		int digit = n % 10;
		newQueue->push(digit);
		n /= 10;
	} while (n > 0);

	// reassemble into new number
	long m = 0;

	while (!newQueue->empty()) {
		int newN = *(newQueue->front());
		newQueue->pop();
		m = (m * 10) + newN;
	}

	return (theNumber == m) ? true : false;

} 

bool mainProgramInterface :: validSequence(int *theSequence, int n)
{
	/*
	derivedChainStack* newStack = new derivedChainStack();
	bool valid = false;
	bool quit = false;
	int i = 0;

	while (!quit && i <= n) {
		// put 5s in stack
		if (theSequence[i] == 5) {
			newStack->push(theSequence[i]);
			i++;
		}
		// check for change of 5 if 10 encountered
		else if (theSequence[i] == 10) {
			// index of 5
			int index = newStack->indexOf(5);

			// insert 10, remove 5
			if (index > -1) {
				newStack->push(theSequence[i]);
				newStack->erase(index);
				i++;
			}
			// no 5s, return false
			else quit = true;
		}
		// not a 5 or 10
		else quit = true;
	}

	return valid;*/
	return false;
}

void mainProgramInterface :: duplicateStack(derivedChainStack* source, derivedChainStack* dest)
{

	derivedChainStack* tempStack = source;

	while (!tempStack->empty()) {
		int* newN = tempStack->top();
		tempStack->pop();
		dest->push(*newN);
	}
	
}

int mainProgramInterface :: lastCutomer(int m, int n)
{

	// number of customers m
	// number of customers sent to end n

	derivedChainQueue* line = new derivedChainQueue(m);
	for (int i = 1; i <= m; i++) {
		line->push(i);
	}

	while (line->size() != 1) {
		for (int i = 1; i <= n; i++) {
			line->push(*(line->front()));
			line->pop();
		}

		// Serve the first in queue :)
		line->pop();
	}

	return *(line->front());
}

void mainProgramInterface :: call_Palindrome()
{

	cout << endl<<endl<<"Check for Palindrome "<<endl<<endl;
	ifstream myfile;
	long num;
	myfile.open(file1);
	for(int i=0;i<4;i++)
	{
		myfile >> num;
		if(checkPalindrome(num))
			cout<< "The number " << num << " is a Palindrome number" << endl;
		else
			cout<< "The number " << num << " is not a Palindrome number" << endl;
	
	
	}
	
	myfile.close();

}
void mainProgramInterface :: call_validSequence()
{

	cout << endl<<endl<<"Check for Valid Sequence "<<endl<<endl;
	ifstream myfile;
	int *sequence;
	int length;
	myfile.open(file2);
	for(int i=0;i<4;i++)
	{
		myfile >> length;
		sequence = new int[length];
		for(int i=0;i<length;i++)
			myfile >> sequence[i];
		cout << endl << "The Sequence is : " << endl;
		for(int i = 0; i < length; i++)
			cout << sequence[i] << " ";
		cout << endl;

		if(validSequence(sequence, length))
			cout<< "The Sequence is a valid sequence" << endl;
		else
			cout<< "The Sequence is not a valid sequence" << endl;
	
		delete sequence;
	
	}
	
	myfile.close();




}

void mainProgramInterface :: call_dupStack()
{

	cout << endl<<endl<<"Output for Stack Duplicate "<<endl<<endl;
	ifstream myfile;
	int length;
	int temp;
	myfile.open(file3);
	derivedChainStack *myStack, *myStack1;
	for(int i=0;i<3;i++)
	{
		myfile >> length;
		myStack = new derivedChainStack(length);
		myStack1 = new derivedChainStack(length);
		for(int i=0;i<length;i++)
		{
			myfile >> temp;
			myStack->push(temp);
		}
		
		
		duplicateStack(myStack, myStack1);
		cout<<"The source stack is : ";
		
		myStack->printStack();
		
		cout<<"The copied stack is : ";
		
		myStack1->printStack();
		

		myStack->~derivedChainStack();
		myStack1->~derivedChainStack();
	
	}
	
	myfile.close();

}
void mainProgramInterface :: call_lastCustomer()
{
	
	cout << endl<<endl<<"Output for Last Customer program "<<endl<<endl;
	cout << "The last customer with lastCutomer(12, 5) is " << lastCutomer(12, 5) << endl;
	cout << "The last customer with lastCutomer(10, 6) is " << lastCutomer(10, 6) << endl;
	cout << "The last customer with lastCutomer(10, 3) is " << lastCutomer(10, 3) << endl;
	cout<<endl<<endl;

}
