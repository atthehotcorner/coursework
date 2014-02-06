// Abraham Yuen 2014.01.16
#include <iostream>
#include "main.h"

int main() {
    // Ask for numbers
    int n1 = -1;
    int n2 = -1;

    while (n1 < 0 || n2 < 0) {
        std::cout << "Enter two positive integers:" << std::endl;
        std::cin >> n1 >> n2;
        if (n1 < 0 || n2 < 0) {
            std::cout << "Negative integer(s) entered. " << std::endl;
        }
    }

    // Run functions
    int gcd = GCD(n1, n2);
    int lcm = LCM(n1, n2, gcd);
    
    // Print result
    std::cout << "The GCD and LCM between two integers " << n1 << " and " << n2 << " are : " <<
        gcd << " and " << lcm << "." << std::endl;

    return 0;
};
