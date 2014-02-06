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