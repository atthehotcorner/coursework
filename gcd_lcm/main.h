// Abraham Yuen 2014.01.16
#ifndef _MAINH_
#define _MAINH_

int GCD(int a, int b) {
    // If there is a zero
    if (a == 0) return b;
    if (b == 0) return a;
    
    // Otherwise
    while (a != b) {
        if (a > b) a = a-b;
        else b = b-a;
    }
    return a;
};

int LCM(int a, int b, int gcd) {
    return (a*b)/gcd; // Overflow issue but return type is int
};

#endif
