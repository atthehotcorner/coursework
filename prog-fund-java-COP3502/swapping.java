import java.util.*;

class Swapping { 
	public static void main(String[] args) {
		/* if static wasnt included
		Swapping s1 = new Swapping();
		s1.swap(true, false);
		*/

		ArrayList<Boolean> al1 = new ArrayList<Boolean>();

		Boolean a = true;
		Boolean b = false;

		al1.add(a);
		al1.add(b);

		System.out.println("Main before: a = " + al1.get(0) + ", b = " + al1.get(1));
		swap(al1, 0, 1);
		System.out.println("Main after: a = " + al1.get(0) + ", b = " + al1.get(1));
	}	

	public static void swap(ArrayList<Boolean> al1, int index1, int index2) {
		System.out.println("Method before: a = " + al1.get(index1) + ", b = " + al1.get(index2));

		Boolean temp = al1.get(index1);
		al1.set(index1, al1.get(index2));
		al1.set(index2, temp);

		System.out.println("Method before: a = " + al1.get(index1) + ", b = " + al1.get(index2));
	}
}
