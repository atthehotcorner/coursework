public class Diagonal {
    private int size;

    public Diagonal() {
        size = 5;
    }
    
    public Diagonal(int size) {
        this.size = size;
    }
    
    public void printFigure() {
        for(int row = 0; row < size; row++) {
            for(int col = 0; col < size; col++) {
                if (row == col) {
                    System.out.print("* ");
                }
                else {
                    System.out.print("  ");
                }
            }
            System.out.println("");
        }
    }
}
