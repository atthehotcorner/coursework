/*
Abraham Yuen
1H38
Exam 3
4/16/13
*/
import java.util.*;

/* Problem 1

public int countIntsRecursive(int array[], int value) {
    return countIntsRecursive(array, value, 0, 0);
}

public int countIntsRecursive(int array[], int value, int counter, int i) {
    if (i+1 > array.length) {
        return counter;
    }
    else if (array[i] == value) {
        return countIntsRecursive(array, value, counter+1, i+1);
    }
    else {
        return countIntsRecursive(array, value, counter, i+1);
    }
}

*/

/* Problem 2 

// Base Case
if (i+1 > array.length) {		
        return counter;
}

// Recursive case 1
else if (array[i] == value) {
	// Recursive step 1	
	return countIntsRecursive(array, value, counter+1, i+1); 
}

// Recursive case 2
else {
	// Recursive step 2
	return countIntsRecursive(array, value, counter, i+1);
}

Using another method which contains a total of value matchs and
a counter i, the recursive cases will check if the current value 
is equal to the value given. If so, it will add 1 to the total
matches and call the method again with i+1, otherwise it will 
just call the method again with i+1. Once the i value is greater
than the length of the array, it returns the total value of
matchs as in the base case.

*/

/* Problem 3 */
class Storm {
	protected int rainfall;
	public Storm() {
		rainfall = 0;
	}
}

/* Problem 4 */
class Hurricane extends Storm {
	private double windSpeed;

	public Hurricane() {
		windSpeed = 0;
	}

	public Hurricane(double windSpeed) {
		this.windSpeed = windSpeed;
	}

	public double getWindSpeed() {
		return windSpeed;
	}

	public String effect() {
		if (windSpeed >= 0 && windSpeed <= 73) {
			return "Tropical Storm";
		}
		else if (windSpeed >= 74 && windSpeed <= 95) {
			return "Category 1";
		}
		else if (windSpeed >= 96 && windSpeed <= 110) {
			return "Category 2";
		}
		else if (windSpeed >= 111 && windSpeed <= 130) {
			return "Category 3";
		}
		else if (windSpeed >= 131 && windSpeed <= 155) {
			return "Category 4";
		}
		else if (windSpeed >= 156) {
			return "Category 5";
		}
		else {
			return "";
		}
	}
}

/* Problem 5 */
class Driver {
	public static void main(String[] args) {
		Hurricane list[] = new Hurricane[1000];
		int i = 0;
		Storm storms = new Storm();
		Scanner scanner = new Scanner(System.in);
		boolean quit = false;

		while (!quit) {
			System.out.println("--Hurricane Manager--");
			System.out.print("Enter hurricane speed (number): ");
			double windSpeed = Double.parseDouble(scanner.nextLine());
			list[i] = new Hurricane(windSpeed);
			i++;

			System.out.print("Add another hurricane? (Y/N): ");
			char needToQuit = scanner.nextLine().charAt(0);
			if (needToQuit == 'N' || needToQuit == 'n') {
				System.out.println("--List of Storms Entered--");
				for (int x=0; x < list.length; x++) {
					if (list[x] != null) {
						System.out.println("Storm effect is " + list[x].effect() + " with wind speed " + list[x].getWindSpeed() + ".");
					}
				}
				quit = true;
			}
		}
	}
}
