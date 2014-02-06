#include <iostream>

char writeout(int n) {
  char b[] = {'c','a','t'};

  for (int i = 0; i < sizeof(n); ++i) {
    //std::cout << n[0];
    while (n) {
      if (n == 0) std::cout << "zero";
      else if (n == 1) std::cout << "one";
      else if (n == 2) std::cout << "two";
      else if (n == 3) std::cout << "three";
      else if (n == 4) std::cout << "four";
      else if (n == 5) std::cout << "five";
      else if (n == 6) std::cout << "six";
      else if (n == 7) std::cout << "seven";
      else if (n == 8) std::cout << "eight";
      else if (n == 9) std::cout << "nine";
    }  
  }
  return *b;
}

unsigned int sumup(char a[]) {
  char *b = a;
  char *e = a;//*std::end(a);
  unsigned int i;
    for (auto c = a; c != e; ++c) {
      ++i;
    }
  return i;
}

int main() {
  unsigned int n;

  // Promt
  std::cout << "Type an unsigned integer, please " << std::endl;
  std::cin >> n;

  while (n > 9) {
    // inital n
    std::cout << n << " ";
    char c = writeout(n);
    n = sumup(&c);

    // Output words
    for (auto d = c; d != ++d /*std::end()*/; ++d) {
      std::cout << d << " ";
    }
    
    std::cout << c << " " << n << std::endl;
    // delete c;
 }

  return 0;
}

