import java.util.Scanner;

public class StringExercises {
    private String s1;
    private String s2;

    public void menu() {
        Scanner scanner = new Scanner(System.in);
        
        boolean isRunning = true;
        
        while(isRunning) {
            System.out.println("Please select option:");
            System.out.println("1. Input the first string.");
            System.out.println("2. Input the second string.");
            System.out.println("3. Compare whether the Strings have equivalent values.");
            System.out.println("4. Determine if the first string is a subset of the second string.");
            System.out.println("5. Determine the length of both strings.");
            System.out.println("6. Find the character at a location within each string. The user will input the character position.");
            System.out.println("7. Break the first string into a substring. The user will input the starting and ending positions of the substring.");
            System.out.println("8. Combine the two strings into a single string, concatenating the two together.");
            
            int choice = scanner.nextInt();
            
            
            if (choice == 1) {
                System.out.println("Please enter first string:");
                s1 = scanner.next();
            }
            else if (choice == 2) {
                System.out.println("Please enter second string:");
                s2 = scanner.next();
            }
            else if (choice == 3) {
                if (s1.equals(s2)) {System.out.println("They are equal.");}
                else {System.out.println("They are not equal.");}
            }
            else if (choice == 4) {
                if (s2.length() > s1.length()) {
                    if (s2.contains(s1)) {System.out.println("First string is a subset.");}
                    else {System.out.println("Is not a subset.");}
                }
                else {
                    System.out.println("Is not a subset.");
                }
            }
            else if (choice == 5) {
                System.out.println("Size of first string : " + s1.length());
                System.out.println("Size of second string : " + s2.length());
            }
            else if (choice == 6) {
                System.out.println("Input a character location:");
                int charLocation = scanner.nextInt();
                
                if(charLocation < s1.length()) {
                    System.out.println(s1.charAt(charLocation));
                }
                if(charLocation < s2.length()) {
                    System.out.println(s2.charAt(charLocation));
                }
            }
            else if (choice == 7) {
                System.out.println("Enter two character locations:");
                int beginCharacter = scanner.nextInt();
                int endCharacter = scanner.nextInt();
                
                if ((beginCharacter < endCharacter) && (endCharacter < s1.length())) {
                    System.out.println(s1.substring(beginCharacter, endCharacter));
                }
            }
            else if (choice == 8) {
                System.out.println(s1+s2);
            }
            else {
                System.out.println("Not a valid option... quitting.");
                isRunning = false;
            }
        }
    }
}
