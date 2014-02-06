/*
Abraham Yuen
1H38
Quiz 10
4/9/2013
*/

/* Problem 1

public int sum(int a[]) {
	return sum(a, 0);
}

public int sum(int a[], int index) {
	if (index > a.length - 1) {
		return 0;
	}
	else {
		return a[index] + sum(a, index + 1);
	}
}


/* Problem 2

The base case is when the counter index is larger than the 
length of the array, it returns 0.

The recursive case and step is when counter index is smaller than 
the length of the array, it returns the number at the index added 
to the called method with index + 1.

If the index is less than the array length, it moves on to adding 
the next number, else it returns 0. When it reaches the base case
it adds all the numbers together.


/* Problem 3
public boolean greaterThan(int a[], int value) {
	return greaterThan(a, value, 0);
}

public boolean greaterThan(int a[], int value, int index) {
	if (index > a.length - 1) {
		return true;
	}
	else if (a[index] > value) {
		return greaterThan(a, value, index + 1);
	}
	else {
		return false;
	}
}


/* Problem 4 

The base case is when the counter index is larger than the 
length of the array, it returns true.

The recursive case and step is when the number in the array is 
greater than the value, it calls the method again while increasing 
the index.

If the value is greater than the number, it moves on to the next
number, else it returns false. Otherwise, when it reaches the end 
of the array, it returns true.

*/
