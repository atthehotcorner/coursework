/*******************************************************
 * Name:     Abraham Yuen                              *
 * Section:  1H38                                      *
 * Quiz:     #7                                        *
 * Date:     March 12, 2013                            *
 *******************************************************/

/*******************************************************
  Problem #1

Analysis:
In the example, the diagonal line has 5 stars,
when the row number is equal to the column number,
it prints a star, otherwise it prints a space.
So for example, if row is 1 and column is 1, 
star is printed.

Design:
for each row
  for each col
    if row equal col
      print "* "
    else 
      print "  "

 *******************************************************/

private class Diagonal {
    private int size;

    public Diagonal() {
        size = 5;
    }
    
    public Diagonal(int size) {
        this.size = size;
    }
    
    public void printFigure() {
        for(int row = 0; row < size; row++) {
            for(int col = 0; col < size; col++) {
                if (row == col) {
                    System.out.print("* ");
                }
                else {
                    System.out.print("  ");
                }
            }
            System.out.println("");
        }
    }
}


/*******************************************************
  Problem #2
 *******************************************************/

private class Figure {
    private char pattern;
    private int length;

    public Figure() {
        pattern = '#';
        length = 5;
    }

    public Figure(char pattern, int length) {
        this.pattern = pattern;
        this.length = length;
    }

    public void printFigure() {
        int shortLength = length - 2;
        
        for(int i = 0; i < length; i++) {
            System.out.print(pattern);
        }
        
        System.out.println("");
        
        for(int row = 0; row < shortLength; row++) {
            for(int col = 0; col < length; col++) {
                if ((col == 0) || (col == (length - 1))) {
                    System.out.print(pattern);
                }
                else {
                    System.out.print(" ");
                }
            }
            System.out.println("");
        }
        
        for(int i = 0; i < length; i++) {
            System.out.print(pattern);
        }
    }
}

/*******************************************************
  Problem #3
 *******************************************************/

public class Driver {
    public static void main(String args[]) {
        Diagonal newLine = new Diagonal(10);
        newLine.printFigure();
        
        Figure newSquare = new Figure('$', 10);
        newSquare.printFigure();
    }
}
