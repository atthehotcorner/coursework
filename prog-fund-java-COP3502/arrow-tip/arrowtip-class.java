/*******************************************************
 * Name:     Abraham Yuen                              *
 * Section:  1H38                                      *
 * Homework: #5                                        *
 * Date:     March 16, 2013                            *
 *******************************************************/

/*******************************************************
 * Name:     Abraham Yuen                              *
 * Section:  1H38                                      *
 * Homework: #4                                        *
 * Date:     March 13, 2013                            *
 *******************************************************/

/*
 * Analysis:
 * This arrow is justified to the left, and the 
 * number of rows is equal to the longest length of 
 * characters in a column. Each column has 2 more 
 * characters than the column precededing it.
 * The number of characters (>) increases from 1 to 
 * equal the number of rows if that number is odd, or 
 * increases until it reachs 1 minus the number of
 * rows. Nevertheless, after that the number of 
 * characters thereafter decreases back to 1.
 * 
 * Design:
 * int size
 * 
 * for each row less than or equal to size
 *   for each col less than or equal to row
 *     if odd numbered row
 *       print '>'
 *       if col equal to row
 *         print new line
 * for each row greater than or equal to 0
 *   for each col less than row
 *     if odd numbered row
 *       print '>'
 *       if col equal to row - 1
 *         print new line
 */  

public class ArrowTip {
    private int size;

    public ArrowTip() {
        this.size = 6;
    }

    public ArrowTip(int size) {
        this.size = size;
    }
   
    public int getSize() {return this.size;}
    public void setSize(int size) {this.size = size;}
    public String toString() {return "Triangle size is " + this.size + " units. \nThis is how it looks:";};
    public void printInfo() {System.out.println(toString()); this.printFigure();};
   
    public void printFigure() {
        System.out.println("");
        
        for(int row = 1; row <= size; row++) {
            for(int col = 1; col <= row; col++) {
                if (row % 2 != 0) {
                    System.out.print('>');
                    if (col == row) {
                        System.out.println("");
                    }
                }
            }
        }
            
        for(int row = size - 1; row >= 0; row--) {
            for(int col = 0; col < row; col++) {
                if (row % 2 != 0) {
                    System.out.print('>');
                    if (col == (row - 1)) {
                        System.out.println("");
                    }
                }
            }
        }
    }
}