
public class DC3 {
    public void test() {
      /*  int a = 6, b = 25, c = 2, d = 3, e, f = 6;
 
        e = a * c + b - d;
        System.out.println("a * c + b - d = " + e);
        
        e = d - b * c / d;
        System.out.println("d - b * c / d = " + e);
        
        System.out.println(a==f);
        System.out.println(b==c);
        System.out.println(c==d);
        
        System.out.println(a>f);
        System.out.println(b<c);
        System.out.println(c>=d);
        
        System.out.println(a==f && b==c);
        System.out.println(a==f || b==c);
        System.out.println(a==f || b==c && c==d);
        
        System.out.println(a>=f && b>c);
        System.out.println(a==f || c<=a);
        System.out.println(a<f || b>=c && c!=d);
        */
        int a = 6, b = 25, c = 2, d = 3, e, f = 6;
	
e = a * c + b - d;
System.out.println("a * c + b - d = " + e);
e = d - b * c / d;
System.out.println("d - b * c / d = " + e);

System.out.println(a == f);
System.out.println(b == c);
System.out.println(c == d);

System.out.println(a > f);
System.out.println(b < c);
System.out.println(c >= d);

System.out.println(a == f && b == c);
System.out.println(a == f || b == c);
System.out.println(a == f || b == c && c == d);

System.out.println(a >= f && b > c);
System.out.println(a == f || c <= a);
System.out.println(a < f || b >= c && c != d);	


    }
    
    public void qs4(){
int x = 4;
int y = 10;
double e = 2.3;
String alpha = "a";

System.out.println("x \t" + x);
System.out.println("y \t" + y);
System.out.println("e \t" + e);
System.out.println("alpha \t" + alpha);
    }
    
    public void qs5(){
        int a = 3;
        int b = 2;
        a *= 20 + 28 % 5 / 3 - 15 * b++;
        
        System.out.println(a);
        
        int c = 3;
        int d = 2;
        
        c *= ((20 + ((28 % 5) / 3)) - (15 * d++));
        System.out.println(c);
        System.out.println(d);
    }
}
