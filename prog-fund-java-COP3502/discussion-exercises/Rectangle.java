public class Rectangle {
    private int length;
    private int width;

    public Rectangle() {
        length = 5;
        width = 8;
    }

    public Rectangle(int length, int width) {
        this.length = length;
        this.width = width;
    }

    public void printFigure() {
        length = 5;
        width = 8;
        
        for(int m = 0; m <= width; m++) {
            if (m == 0) {System.out.print("\t");}
            else {System.out.print(m + "\t");}
        }
        
        System.out.println("\n");
        
        for(int i = 1; i <= length; i++) {
            for(int a = 0; a <= width; a++) {
                if (a == 0) {System.out.print(i + "\t");}
                else {System.out.print("*\t");}
            }
            System.out.println("");
        }
    }
    
    public int multiplicationTable(int rows, int cols) {
        int sum = 0;
        
        for(int m = 0; m <= cols; m++) {
            if (m == 0) {System.out.print("\t");}
            else {System.out.print(m + "\t");}
        }
        
        System.out.println("\n");
        
        for(int i = 1; i <= rows; i++) {
            for(int a = 0; a <= cols; a++) {
                if (a == 0) {System.out.print(i + "\t");}
                else {
                    System.out.print((i*a) + "\t");
                    sum = sum + (i*a);
                }
            }
            System.out.println("");
        }
        
        return sum;
    }
}
