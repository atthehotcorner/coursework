/******************************************************
* Name:     Abraham Yuen                              *
* Section:  1H38                                      *
* Quiz:     #5                                        *
* Date:     Feburary 19, 2013                         *
******************************************************/

/******************************************************
Problem #1

    public void rangePrinter(int a, int b) {
        if (a <= b) {
            while(a <= b) {
                System.out.println("number: " + a);
                a++;
            }
        }
        else {
            while(b <= a) {
                System.out.println("number: " + b);
                b++;
            }
        }
    }

******************************************************/

/******************************************************
Problem #2

    public void sumAverager(int a, int b) {
        int sum = 0;
        int counter = 0;
        
        if (a <= b) {
            while(a <= b) {
                sum = sum + a;
                a++;
                counter++;
            }
            
            System.out.println("sum: " + sum);
            System.out.println("average: " + sum/counter);
        }
        else {
            System.out.println("error: starting number is higher than ending number");        
        }
    }

******************************************************/

/******************************************************
Problem #3
******************************************************/

import java.util.ArrayList;
import java.util.Scanner;

public class Paragraph {
  private ArrayList<String> sentences;

  public Paragraph() {
    sentences = new ArrayList<String>();
  }
  public void addSentence(String sentence) {
    sentences.add(sentence);
  }
  public void addTerminalInputSentence() {
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter a sentence:  ");
    String data = scanner.nextLine();
    addSentence(data);
  }
  public String toString() {
    String data = "";

    for (String sentence : sentences) {
      data = data + sentence + "\n";
    }
    return data;
  }
  public int numberOfSentences() {
    return sentences.size();
  }
  
  public void insert(String sentence, int index) {
    sentences.add(index, sentence);
  }
  
  public String remove(String sentence) {
    if (sentences.remove(sentence)) {return sentence;}
    else {return "";}
  }
  
  public void menu() {
    boolean needtoquit = false;
    
    while(!needtoquit) {
        System.out.println("\nList of selections:");
        System.out.println("addSentence");
        System.out.println("addTerminalInputSentence");
        System.out.println("toString");
        System.out.println("numberOfSentences");
        System.out.println("insert");
        System.out.println("remove");
        System.out.println("quit\n");
        
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a selection: ");
        String data = scanner.nextLine();

        if (data.equals("addSentence")) {
            addTerminalInputSentence();
        }
        else if (data.equals("addTerminalInputSentence")) {
            addTerminalInputSentence();
        }
        else if (data.equals("toString")) {
            System.out.println(toString());
        }
        else if (data.equals("numberOfSentences")) {
            System.out.println(numberOfSentences());
        }
        else if (data.equals("insert")) {
            System.out.print("Enter a sentence to insert: ");
            String data3 = scanner.nextLine();
            insert(data3, (sentences.size()));
        }
        else if (data.equals("remove")) {
            System.out.print("Enter a sentence to remove: ");
            String data2 = scanner.nextLine();
            remove(data2);
        }
        else if (data.equals("quit")) {
            needtoquit = true;
            System.out.println("You have quit.");
        }
    }
  }
}
