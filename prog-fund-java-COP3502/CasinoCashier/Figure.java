public class Figure {
    private char pattern;
    private int length;

    public Figure() {
        pattern = '#';
        length = 5;
    }

    public Figure(char pattern, int length) {
        this.pattern = pattern;
        this.length = length;
    }

    public void printFigure() {
        int shortLength = length - 2;
        
        for(int i = 0; i < length; i++) {
            System.out.print(pattern);
        }
        
        System.out.println("");
        
        for(int row = 0; row < shortLength; row++) {
            for(int col = 0; col < length; col++) {
                if ((col == 0) || (col == (length - 1))) {
                    System.out.print(pattern);
                }
                else {
                    System.out.print(" ");
                }
            }
            System.out.println("");
        }
        
        for(int i = 0; i < length; i++) {
            System.out.print(pattern);
        }
    }
}
