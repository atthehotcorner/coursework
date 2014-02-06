import java.util.*;

class Drivernew {

    public static void main(String args[]) {
    }
    
    public void swap(boolean one, boolean two) {
    boolean temp = one;
    one = two;
    two = temp;
}

public void swap(ArrayList<Character> list, int index1, int index2) {
    Character temp = list.get(index1);
    list.set(index1, list.get(index2));
    list.set(index2, temp);
}
}


