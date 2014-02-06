

public class dq4
{
    // instance variables - replace the example below with your own
    private int x;

    public dq4()
    {
        // initialise instance variables
        x = 0;
    }

public boolean pro1(int a, int b){
    System.out.println("The sum of " + a + " and " + b + " equals:\t" + (a+b));
    System.out.println("The product of " + a + " and " + b + " equals:\t" + (a*b));
    System.out.println("It is " + (a == b) + " that " + a + " equals " + b);
    
    return (a == b);
}

public int romanNumeralValue(char rn) {
    if (rn == 'i' || rn == 'I') return 1;
    else if (rn == 'v' || rn == 'V') return 5;
    else if (rn == 'x' || rn == 'X') return 10;
    else if (rn == 'l' || rn == 'L') return 50;
    else if (rn == 'c' || rn == 'C') return 100;
    else if (rn == 'd' || rn == 'D') return 500;
    else if (rn == 'm' || rn == 'M') return 1000;
    else {
        System.out.println(rn + " is not a roman numberal");
        return -1;
    }
}

public void pro3() {
int  x = 7, y = 3, z = 12;

if (z != x) {
  y  +=  x;
  System.out.println("Print #1");
}
else if (x <= z || true) {
  z = x / y;
  System.out.println("Print #2");
}
else if (z >= (x / y)) {
  System.out.println("Print #3");
}
else {
  y -= z;
  System.out.println("Print #4");
}
if (x  >=  z) {
  System.out.println("Print #5");
}
else if (y != 0 && (x > 4 || x == 0)) {
  x = x - y;
  System.out.println("Print #6");
}
else {
  z = x + y;
  System.out.println("Print #7");
}
}
}
