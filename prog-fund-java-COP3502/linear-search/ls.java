/* Abraham Yuen 1H38 HW7 4.8.13 */

import java.util.ArrayList;

class LinearSearch {
    private ArrayList<Tile> list = new ArrayList<Tile>();
    private Tile linearSearchRecursiveCurrentValue;
    private int linearSearchRecursiveI;

    public LinearSearch() {
        this.linearSearchRecursiveI = 0;
    }
    
    public void addTile(Tile value) {
        list.add(value);
    }
    
    public int linearSearchIterative(Tile value) {
        int place = -1;
        
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).equals(value) == true) {
                place = i;
                break;
            }
        }
        
        return place;
    }
    
    public int linearSearchRecursive(Tile value) {
        if (linearSearchRecursiveI > list.size() - 1) {
            linearSearchRecursiveI = 0;
            return -1;
        }
        else if (list.get(linearSearchRecursiveI).equals(value) == true) {
            int x = linearSearchRecursiveI;
            linearSearchRecursiveI = 0;
            return x;
        }
        else {
            linearSearchRecursiveI++;
            return linearSearchRecursive(value);
        }
    }
}