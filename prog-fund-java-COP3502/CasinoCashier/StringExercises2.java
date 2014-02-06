import java.util.Scanner;

public class StringExercises2 {
    private String s1;
    private String s2;
    
    public StringExercises2() {}

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
