class Rec { 
	public static void main(String[] args) {
		//int[] array = {1,2,3,4,5};
		//System.out.println(sum(array));

		//System.out.println(divide(7,2));
		pal("racecar");
	}

	/*public int sum(int array[]) {
		return sum(array, 0);
	}

	public int sum(int index, int array[]) {
		// base case
		if (index > array.length - 2) {
			return array[index];
		}
		// recursive case
		else {
			return array[index] + sum(array, index + 1);
		}
	}*/

	/*public static int divide(int a, int b) {
		return divide(a, b, 0);
	}

	public static int divide(int a, int b, int sum) {
		if (sum > a) {
			return  - sum;
		}
		else {
			return divide(a, b, sum + a);
		}
	}*/

	public static void pal(String a) {
		//base
		if (a.length() == 0) {
			return;
		}
		//recursive
		else {
			pal(a, a.length() - 1);
			System.out.println();
		}
	}

	public static void pal(String a, int index) {
		if (index < 0) {
			return;
		}
		else {
			System.out.print(a.charAt(index));
			pal(a, index - 1);
		}
	}

	public static boolean ispal(String a) {
		//base
		if (a.length() == 0 || a.length() == 1) {
			return true;
		}
		//recursive
		else {
			ispal(a, a.length() - 1);
		}
	}

	public static boolean ispal(String a, index) {
		
	}

}
