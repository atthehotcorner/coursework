
public class dq5
{
    // instance variables - replace the example below with your own
    private int x;

    /**
     * Constructor for objects of class dq5
     */
    public dq5()
    {
        // initialise instance variables
        x = 0;
    }

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
}
