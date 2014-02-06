/*
Abraham Yuen
1H38
3/19/2013
Exam 2
*/

/* Problem 1 

    public int upperLeftCorner(int array[][], int n, int m) {
        int value = 0;
        
        for(int row = 0; row < n; row++) {
            for(int col = 0; col < m; col++) {
                value = value + array[row][col];
            }
        }
        
        return value;
    }

*/

/* Problem 2 

	public void menu() {
	    Scanner scanner = new Scanner(System.in);
	    
	    boolean quit = false;
	    
	    while(quit == false) {
	        System.out.println();
	        System.out.println("--Magazine Editor--");
	        System.out.println("Choose a command:");
	        System.out.println("1. Get Magazine Name");
	        System.out.println("2. Get Magazine # of Pages");
	        System.out.println("3. Get Magazine Price");
	        System.out.println("4. Set Magazine Name");
	        System.out.println("5. Set Magazine # of Pages");
	        System.out.println("6. Set Magazine Price");
	        System.out.println("7. Get Magazine Information");
	        System.out.println("8. Get Price per Page");
	        System.out.println("9. Get Price Discount");
	        System.out.println("10. Quit Magazine Editor");
	        
	        System.out.print("--What command number do you want to run? (Please enter number): ");
	        int input = 10;
	        if(scanner.hasNextInt() == true) {input = scanner.nextInt();}
	        System.out.print("--");
	        
	        if (input == 1) {System.out.println(getName());}
	        else if (input == 2) {System.out.println(getPages());}
	        else if (input == 3) {System.out.println(getPrice());}
	        else if (input == 4) {
	            System.out.println("--What is the new name?: "); 
	            String newname = scanner.nextLine();
	            this.setName(newname);
	            System.out.print("--");
	        }
	        else if (input == 5) {
	            System.out.print("--What is the new # of pages?: "); 
	            int newpages = scanner.nextInt();
	            this.setPages(newpages);
	            System.out.print("--");
	        }
	        else if (input == 6) {
	            System.out.print("--What is the new price?: "); 
	            double newprice = scanner.nextDouble();
	            this.setPrice(newprice);
	            System.out.print("--");
	        }
	        else if (input == 7) {printInfo();}
	        else if (input == 8) {System.out.println(pricePerPage());}
	        else if (input == 9) {System.out.println(discount());}
	        else if (input == 10) {
	            System.out.println("--Quiting...--"); 
	            quit = true;
	        }
	        else {
	            System.out.println("--Try again...--"); 
	        }
	    }
	}

*/

/* Problem 3

The example has 6 rows, the first one with one centered up arrow. 
The last row has 11 up arrows. 
All of the arrows are centered and increase by 2 arrows every row it goes down.

*/

/* Problem 4

int size

for each row
  if row is odd #
    for each [(size * 2) - row] / 2 
      print ' '
  for each col less than row
    print '^'
  if row is odd #
    print new line
*/

/* Problem 5 */

private class Figure {
    private int size;

    public void printFigure() {
        for(int row = 0; row < size*2; row++) {
            if (row % 2 != 0) {
                for(int i = 0; i < ((size*2) - row)/2; i++) {
                            System.out.print(" ");
                }
            }
            for(int col = 0; col < row; col++) {
                if (row % 2 != 0) {
                    System.out.print("^");
                }
            }
            if (row % 2 != 0) {System.out.println();}
        }
    }
}
