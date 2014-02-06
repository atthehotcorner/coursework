/******************************************************
* Name:     Abraham Yuen                              *
* Section:  1H38                                      *
* Quiz:     #6                                        *
* Date:     Feburary 26, 2013                         *
******************************************************/

/******************************************************
Problem 1
******************************************************/

import java.util.Scanner;

private class StringExercises {
    private String s1;
    private String s2;
    
    public StringExercises() {}

    public void menu() {
        Scanner scanner = new Scanner(System.in);
        boolean quit = false;
        
        while (quit == false) {
            System.out.println("MENU");
            System.out.println("1. Input first string.");
            System.out.println("2. Tnput second string.");
            System.out.println("3. Check if strings are same.");
            System.out.println("4. Find length of strings.");

            int selection = scanner.nextInt();
            
            if (selection == 1) {
                System.out.print("Enter first string: ");
                s1 = scanner.next();
            }
            else if (selection == 2) {
                System.out.print("Enter second string: ");
                s2 = scanner.next();
            }
            else if (selection == 3) {
                if (s1 == null || s2 == null) {
                    System.out.println("One of the strings are not defined. Cannot continue.");
                }
                else {
                    if (s1.equals(s2)) {System.out.println("Strings are equal.");}
                    else {System.out.println("Strings are not equal.");}
                }
            }
            else if (selection == 4) {
                if (s1 == null || s2 == null) {
                    System.out.println("One of the strings are not defined. Cannot continue.");
                }
                else {
                    System.out.println("String 1 length: " + s1.length());
                    System.out.println("String 2 length: " + s2.length());
                }
            }
            else {
                System.out.println("Invalid selection... quitting.");
                quit = true;
            }
        }
    }
}

/******************************************************
Problem 2
******************************************************/

private class Rectangle {
    private int length;
    private int width;

    public Rectangle() {
        length = 5;
        width = 8;
    }

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    public void printFigure() {
        length = 5;
        width = 8;
        
        for(int m = 0; m <= width; m++) {
            if (m == 0) {System.out.print("\t");}
            else {System.out.print(m + "\t");}
        }
        
        System.out.println("\n");
        
        for(int i = 1; i <= length; i++) {
            for(int a = 0; a <= width; a++) {
                if (a == 0) {System.out.print(i + "\t");}
                else {System.out.print("*\t");}
            }
            System.out.println("");
        }
    }
}

/******************************************************
Problem 3

    public int multiplicationTable(int rows, int cols) {
        int sum = 0;
        
        for(int m = 0; m <= cols; m++) {
            if (m == 0) {System.out.print("\t");}
            else {System.out.print(m + "\t");}
        }
        
        System.out.println("\n");
        
        for(int i = 1; i <= rows; i++) {
            for(int a = 0; a <= cols; a++) {
                if (a == 0) {System.out.print(i + "\t");}
                else {
                    System.out.print((i*a) + "\t");
                    sum = sum + (i*a);
                }
            }
            System.out.println("");
        }
        
        return sum;
    }

******************************************************/
