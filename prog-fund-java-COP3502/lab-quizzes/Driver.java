/******************************************************
* Name:     Abraham Yuen                              *
* Section:  1H38                                      *
* Quiz:     #8                                        *
* Date:     3/26/2013                                 *
******************************************************/

/************* Problem 1

public void swap(boolean one, boolean two) {
	boolean temp = one;
	one = two;
	two = temp;
}

/************* Problem 2

It 'passes by value' as it is not an array and only 
passes the values to the method, and does not change 
the values outside of it's scope.

/************* Problem 3

public void swap(ArrayList<Character> list, int index1, int index2) {
	Character temp = list.get(index1);
	list.set(index1, list.get(index2));
	list.set(index2, temp);
}

/************* Problem 4

It 'passes by reference' as it an array and modifies 
the reference to the original array list, and changes 
to the values of the array still apply outside of it's 
scope.

/************* Problem 5 */

class Driver {
	public static void main(String args[]) {
		TriangleLeft triangles[] = new TriangleLeft[3];
		triangles[0] = new TriangleLeft('%', 3);
		triangles[1] = new TriangleLeft('&', 5);
		triangles[2] = new TriangleLeft('@', 4);

		triangles[0].printTriangleLeft();
		System.out.println();
		triangles[1].printTriangleLeft();
		System.out.println();
		triangles[2].printTriangleLeft();
	}
}
