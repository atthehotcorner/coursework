import Prog1Tools.IOTools;

public class MyClass {
    public static void main() {
        method(5,3);
    }

    public static int method(int number, int value) {
        if (number < 0) {
            return 1;
        }
        else if (number % value == 1) {
            return number + method(number - 1, value);
        }
        else {
            return method(number - 1, value);
        }
    }

}