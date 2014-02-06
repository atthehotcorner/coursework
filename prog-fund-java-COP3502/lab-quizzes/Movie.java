/******************************************************
* Name:     Abraham Yuen                              *
* Section:  1H38                                      *
* Quiz:     #4                                        *
* Date:     February 5, 2013                          *
******************************************************/

/******************************************************
Problem #1
  
public boolean pro1(int a, int b){
    System.out.println("The sum of " + a + " and " + b + " equals:\t" + (a+b));
    System.out.println("The product of " + a + " and " + b + " equals:\t" + (a*b));
    System.out.println("It is " + (a == b) + " that " + a + " equals " + b);
    
    return (a == b);
}

******************************************************/

/******************************************************
Problem #2

public int romanNumeralValue(char rn) {
    if (rn == 'i' || rn == 'I') return 1;
    else if (rn == 'v' || rn == 'V') return 5;
    else if (rn == 'x' || rn == 'X') return 10;
    else if (rn == 'l' || rn == 'L') return 50;
    else if (rn == 'c' || rn == 'C') return 100;
    else if (rn == 'd' || rn == 'D') return 500;
    else if (rn == 'm' || rn == 'M') return 1000;
    else {
        System.out.println(rn + " is not a roman numberal");
        return -1;
    }
}

******************************************************/

/******************************************************
Problem #3

"if (z != x), else if (x <= z || true), else if (z >= (x / y)), else" 
are one connected statement

"if (x  >=  z), else if (y != 0 && (x > 4 || x == 0)), else" is the 
other if statement

Output:
Print #1
Print #6

Values:
x = -3
y = 10
z = 12

******************************************************/

/******************************************************
Problem #4
******************************************************/

public class Movie {
    private String title;
    private double price;
    private char rating;

    public Movie() {
        title = "Cat";
        price = 9.99;
        rating = 'R';
    }

    public Movie(String title, double price, char rating) {
        this.title = title;
        this.price = price;
        this.rating = rating;
    }

    //gets
    public String getTitle() {return title;}
    public double getPrice() {return price;}
    public char getRating() {return rating;}
    
    //sets
    public void setTitle(String title) {this.title = title;}
    public void setPrice(double price) {this.price = price;}
    public void setRating(char rating) {this.rating = rating;}

    public String toString() {
        return "Movie title is " + title + "\nRating is " + rating + "\nPrice of ticket is " + price;
    }
    
    public void printInfo () {
        System.out.println(toString());
    }
    
    // Cal ticket price
    public double ticketPrice(int age, boolean student) {
        
        // set cost
        if (rating == 'G') price = 5.00;
        else if (rating == 'P') price = 7.50;
        else if (rating == 'R') price = 9.00;
        
        // student discount
        if (student == true) {
            price = price - (0.15 * price);
        }
        
        // boot out underage people
        if ((age < 18) && (rating == 'R')) {
            System.out.println("We're sorry, but viewers of " + title + " must be ages 18 or older to purchase tickets.");
            price = -1;
        }
        
        return price;
    }
}
