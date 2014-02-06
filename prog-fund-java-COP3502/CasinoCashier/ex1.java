
/**
 * Write a description of class ex1 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class ex1
{
    // instance variables - replace the example below with your own
    private int x;

    /**
     * Constructor for objects of class ex1
     */
    public ex1()
    {
        // initialise instance variables
        x = 0;
    }

    /**
     * An example of a method - replace this comment with your own
     * 
     * @param  y   a sample parameter for a method
     * @return     the sum of x and y 
     */
    public int sampleMethod(int y)
    {
        // put your code here
        return x + y;
    }
    
    public void print() { 
        System.out.println("a quick\t\tbrown fox\n\njumps over\t\tthe lazy dog");
    }
    
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
}
