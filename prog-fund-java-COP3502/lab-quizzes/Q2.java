/*******************************************************
 * Name:     Abraham Yuen                              *
 * Section:  1H38                                      *
 * Quiz:     #2                                        *
 * Date:     January 22, 2013                          *
 *******************************************************/


/*******************************************************
  Problem #1
  
        0  is type  int
  “hello”  is type  String
       –1  is type  int
     true  is type  boolean
     ‘\n’  is type  char
     “33”  is type  String
      ‘a’  is type  char
   3.1415  is type  double

 *******************************************************/


/*******************************************************
  Problem #2

  The constructor has no return type, and has the same 
  name as the class.

 *******************************************************/


/*******************************************************
  Problem #3

  public void discount(int amount) {
    this.price = this.price - amount;
  }

 *******************************************************/


/*******************************************************
  Problem #4

  In the default constructor, there are no issues with 
  scope and the variables cash and chips reference the 
  global properties.

  When 'this.' is removed from the second constructor,
  the variables cash and chips refer to the nearest 
  declaration, and does not modify the global properties.

 *******************************************************/


/*******************************************************
  Problem #5

  My Mr Biggleworth has green eyes

 *******************************************************/


/*******************************************************
  Problem #6

 *******************************************************/

public class Letter {
  private String address;
  private double postage;
  private double weight;

  public Letter() {
    this.address = "23 Cat Street";
    this.postage = 10.23;
    this.weight = 5.67;
  }
  public Letter(String address, double postage, double weight) {
    this.address = address;
    this.postage = postage;
    this.weight = weight;
  }
  
  // gets
  public String getAddress() {return address;}
  public double getPostage() {return postage;}
  public double getWeight() {return weight;}
  
  // sets
  public void setAddress(String address) {this.address = address;}
  public void setPostage(double postage) {this.postage = postage;}
  public void setWeight(double weight) {this.weight = weight;}
  
  public void printInfo() {
    System.out.println("This package is going to " + address + ". \nIt weighs " + weight + ", which costs " + postage + " to send.");
  }
}
