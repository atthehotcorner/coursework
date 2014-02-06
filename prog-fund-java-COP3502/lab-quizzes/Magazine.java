/******************************************************
* Name:     Abraham Yuen                              *
* Section:  1H38                                      *
* Exam:     #1                                        *
* Date:     2/12/2013                                 *
******************************************************/

/******************************************************
Problem #1

public void print() { 
  System.out.println("a quick\t\tbrown fox\n\njumps over\t\tthe lazy dog");
}

******************************************************/

/******************************************************
Problem #2

public void sizer(int a) {
  String sign = "positive";
  if (a < 0) sign = "negative";
        
  if (a >= -10 && a <= 10) {
    System.out.println("The interger " + a + " is " + sign + ", small size.");
  }
  else if ((a >= -1000 && a < -10) || (a >10 && a <= 1000)) {
    System.out.println("The interger " + a + " is " + sign + ", medium size.");
  }
  else if (a < -1000 || a > 1000) {
    System.out.println("The interger " + a + " is " + sign + ", large size.");
  }
}

******************************************************/

/******************************************************
Problem #3
******************************************************/

public class Magazine {
    private String name;
    private int pages;
    private double price;

    public Magazine() {
        this.name = "Empty Magazine";
        this.pages = 150;
        this.price = 2.05;
    }

    public Magazine(String name, int pages, double price) {
        this.name = name;
        this.pages = pages;
        this.price = price;
    }

    public String getName() {return this.name;}
    public int getPages() {return this.pages;}
    public double getPrice() {return this.price;}
    
    public void setName(String name) {this.name = name;}
    public void setPages(int pages) {this.pages = pages;}
    public void setPrice(double price) {this.price = price;}
    
    public String toString() {
        return "Name: " + this.name + "\nPages: " + this.pages + "\nPrice: $" + this.price;
    }
    
    public void printInfo() {
        System.out.println(toString());
    }
    
    public double pricePerPage() {
        double a = price / pages;
        //System.out.println("Cost per page: $" + a);
        return a;
    }
    
    public double discount() {
        double a = pricePerPage();
        if (a > 1) {return this.price * 0.9;}
        else {return this.price;}
    }
}

/******************************************************
Problem #4

public int largerMagazine(Magazine magazine1, Magazine magazine2) {
  int a = magazine1.getPages();
  int b = magazine2.getPages();
        
  if (a > b) {return a;}
  else {return b;}
}

******************************************************/

/******************************************************
Problem #5

public class Car {
    private String color;
    private WheelSet wheelSet;
    private int year;

    public Car() {
        this.color = "chrome";
        this.wheelSet = new WheelSet();
        this.year = 2014;
    }

   public Car(String color, WheelSet wheelSet, int year) {
        this.color = color;
        this.wheelSet = wheelSet;
        this.year = year;
    }
}

******************************************************/
