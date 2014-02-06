public class DC8
{
    // instance variables - replace the example below with your own
    private int x;

    public static void main(String args[]) {
        DC8 cat = new DC8();
        cat.printX(9);
    }
    
    public DC8() {
    }


/*
 * int begin = 0;
 * int end = size;
 * for each row
 *   for each col
 *     if col == begin OR col == end
 *       print "*"
 *     else 
 *       print " "
 */

public void printX(int size) {
  int begin =0;
  int end = size -1;
  
  for(int row = 0; row < size; row++) {
      for(int col = 0; col < size; col++) {
          if((col ==  begin) || (col == end)) {
           System.out.print("*");
        }
          else {
              System.out.print(" ");
            }
        }
        
        System.out.println("");
        begin++;
        end--;
        
    }
}


}
