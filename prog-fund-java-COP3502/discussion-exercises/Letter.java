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