public class FigureE2 {
private int list[][];
private int size;

    public FigureE2() {size = 6;}

      public void ReviewArray() {
    list = new int[2][];

    list[0] = new int[4];
    list[1] = new int[4];

    list[0][0] = 1;
    list[0][1] = 2;
    list[0][2] = 3;
    list[0][3] = 4;

    list[1][0] = 5;
    list[1][1] = 6;
    list[1][2] = 7;
    list[1][3] = 8;
  }

    
    public int upperLeftCorner(int a, int n, int m) {
        int value = 0;

        for(int row = 0; row < n; row++) {
            for(int col = 0; col < m; col++) {
                value = value + list[row][col];
            }
        }
        
        return value;
    }
    
    public void printFigure() {
        for(int row = 0; row < size*2; row++) {
            if (row % 2 != 0) {
                for(int i = 0; i < ((size*2) - row)/2; i++) {
                            System.out.print(" ");
                }
            }
            for(int col = 0; col < row; col++) {
                if (row % 2 != 0) {
                    System.out.print("^");
                }
            }
            if (row % 2 != 0) {System.out.println();}
        }
    }
}
