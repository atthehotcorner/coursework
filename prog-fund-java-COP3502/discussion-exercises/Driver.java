public class Driver {
    public static void main(String args[]) {
        Diagonal newLine = new Diagonal(10);
        newLine.printFigure();
        
        Figure newSquare = new Figure('$', 10);
        newSquare.printFigure();
    }
}
