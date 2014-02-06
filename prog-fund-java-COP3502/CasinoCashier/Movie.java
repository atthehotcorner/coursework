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
