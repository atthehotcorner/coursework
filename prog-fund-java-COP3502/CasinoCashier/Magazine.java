import java.util.Scanner;

class magazine
{
	private String name;
	private int pages;
	private double price;
	public magazine()
	{
		name="random name";
		pages=10000;
		price=100.0;
	}
	public magazine(String n,int p, double pr)
	{
		name=n;
		price=p;
		price=pr;
	}
	public String getName()
	{
		return name;
	}
	public int getPages()
	{
		return pages;
	}
	public double getPrice()
	{
		return price;
	}
	public void setName(String n)
	{
		name=n;
	}
	public void setPages(int n)
	{
		pages=n;
	}
	public void setPrice(double n)
	{
		price=n;
	}
	public String toString()
	{
		String retval="";
		retval+="The name of the magazine is: "+name;
		retval+="\nThe magazine is " + pages + " pages long\n";
		retval+="The magazine costs " + price + " dollars";
		return retval;
	}
	public void printInfo()
	{
		System.out.println(this.toString());
	}
	
	public double pricePerPage()
	{
		return price/(double)pages;
	}
	public double discount()
	{
		if(this.pricePerPage()>1.0)
		{
			price=price*0.9;
			return price;
		}
		else
		{
			return price;
		}
	}
	
	public void menu() {
	    Scanner scanner = new Scanner(System.in);
	    
	    boolean quit = false;
	    
	    while(quit == false) {
	        System.out.println();
	        System.out.println("--Magazine Editor--");
	        System.out.println("Choose a command:");
	        System.out.println("1. Get Magazine Name");
	        System.out.println("2. Get Magazine # of Pages");
	        System.out.println("3. Get Magazine Price");
	        System.out.println("4. Set Magazine Name");
	        System.out.println("5. Set Magazine # of Pages");
	        System.out.println("6. Set Magazine Price");
	        System.out.println("7. Get Magazine Information");
	        System.out.println("8. Get Price per Page");
	        System.out.println("9. Get Price Discount");
	        System.out.println("10. Quit Magazine Editor");
	        
	        System.out.print("--What command number do you want to run? (Please enter number): ");
	        int input = 10;
	        if(scanner.hasNextInt() == true) {input = scanner.nextInt();}
	        //int input = scanner.nextInt();
	        System.out.print("--");
	        
	        if (input == 1) {System.out.println(getName());}
	        else if (input == 2) {System.out.println(getPages());}
	        else if (input == 3) {System.out.println(getPrice());}
	        else if (input == 4) {
	            System.out.println("--What is the new name?: "); 
	            String newname = scanner.next();
	            this.setName(newname);
	            System.out.print("--");
	        }
	        else if (input == 5) {
	            System.out.print("--What is the new # of pages?: "); 
	            int newpages = scanner.nextInt();
	            this.setPages(newpages);
	            System.out.print("--");
	        }
	        else if (input == 6) {
	            System.out.print("--What is the new price?: "); 
	            double newprice = scanner.nextDouble();
	            this.setPrice(newprice);
	            System.out.print("--");
	        }
	        else if (input == 7) {printInfo();}
	        else if (input == 8) {System.out.println(pricePerPage());}
	        else if (input == 9) {System.out.println(discount());}
	        else if (input == 10) {
	            System.out.println("--Quiting...--"); 
	            quit = true;
	        }
	        else {
	            System.out.println("--Try again...--"); 
	        }
	    }
	}
	
	
}