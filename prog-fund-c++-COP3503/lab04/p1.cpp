#include <iostream>

void printlinehelper(const int n, int current, const bool odd) {
  char c1 = (odd == true)? '|':'+'; // change chars if even row
  char c2 = (odd == true)? ' ':'-';

  // base cases
  if (current == 0) std::cout << c1;
  else if (current > 0 && current < n+1) std::cout << c2;
  else {
    std::cout << c1 << std::endl;
    return;
  }
 
  // recursive
  printlinehelper(n, ++current, odd);
}

void printrows(const int n, const int row, int remainingrows) {
  // base cases
  if (remainingrows == 0) return;
  else printlinehelper(n, 0, (remainingrows%2 != 0)? true:false);

  // recursive
  printrows(n, row, --remainingrows);
}

void printpattern(const int n) {
  const int row = n + (n + 1); // # of rows in pattern
  printrows(n, 1, row);
}

int main() {
  int n = 0;

  // ask
  while (n < 1 || n > 15) {
    std::cout << "Enter an integer value between 1 and 15:" << std::endl;
    std::cin >> n;
    if (n < 1 || n > 15) {
      std::cout << "Invaild\n" << std::endl;
      n = 0;
    }
  }

  printpattern(n);
  return 0;
}
