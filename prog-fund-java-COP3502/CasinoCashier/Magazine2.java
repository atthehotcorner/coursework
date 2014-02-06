
/**
 * Write a description of class Magazine2 here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Magazine2
{
    // instance variables - replace the example below with your own
    private int x;

    /**
     * Constructor for objects of class Magazine2
     */
    public Magazine2()
    {
        // initialise instance variables
        x = 0;
    }

    public int largerMagazine(Magazine magazine1, Magazine magazine2) {
        int a = magazine1.getPages();
        int b = magazine2.getPages();
        
        if (a > b) {return a;}
        else {return b;}
    }
}
