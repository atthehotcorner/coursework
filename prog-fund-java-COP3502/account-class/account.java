/*
Implement Java code for the class Account. An Account has a double property balance, the balance of money in the Account. Create two constructors (default and initialization), accessor (get/set) methods, a printInfo method, a toString method, a method deposit that will increase the balance by a specified amount returning nothin, and a method withdraw that will decrease the balance by a user specified amount returning the amount withdrawn.  Note: you will perform no error checking, so the account balance is allowed to become negative.
*/

public class Account {
	private double balance;

	// constructers
	public Account() {
		this.balance = 0;
	}
	public Account(double balance) {
		this.balance = balance;
	}

	// accessors
	public double getBalance() {return this.balance;}
	public void setBalance(double balance) {this.balance = balance;}

	// printInfo
	public void printInfo() {
		System.out.println(toString());
	}

	// toString
	public String toString() {
		return "The balance is $" + this.balance + " at this time.";
	}

	// methods
	public void deposit(double deposit) {
		this.balance += deposit;
	}
	public double withdraw(double withdraw) {
		this.balance -= withdraw;
		return withdraw;
	}
}