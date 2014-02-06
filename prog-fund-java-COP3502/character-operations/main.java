import java.util.Scanner;

public class CharacterOperations {
    public CharacterOperations() {
    }
    
    public char toUpper(char a) {
        return 'a';
    }
    
    public char toLower(char a) {
        return 'b';
    }
    
    public String alphabet(char a, char b) {
        return "";
    }
    
    public void run() {
        boolean quit = false;
        
        while(quit == false) {
            System.out.println("---------------------");
            System.out.println("CHARACTER OPERATIONS");
            System.out.println("Welcome to program.\nMake selection please.");
            System.out.println("---------------------");
            System.out.println("1. Quit Program");
            System.out.println("2. Transform lower case value to upper case");
            System.out.println("3. Transform upper case value to lower case");
            System.out.println("4. Get range of two character values");
            System.out.println("---------------------");
            System.out.print("Enter number of selection: ");
            Scanner scanner = new Scanner(System.in);
            String data = scanner.nextLine();
            
            if (data.equals("1")) {
                System.out.println("---------------------");
                System.out.println("Thank you for letting program serve you.\nGood bye.");
                System.out.println("---------------------");
                quit = true;
            }
            else if (data.equals("1")) {
                quit = true;
            }
            else if (data.equals("2")) {
                toUpper(char 'a');
            }
            else if (data.equals("3")) {
                toLower(char 'a');
            }
            else if (data.equals("4")) {
                alphabet(char 'a', char 'a');
            }
            else {
                System.out.println("---------------------");
                System.out.println("Invaild input, try again.\n\n\n");
            }
        }
    }
}
