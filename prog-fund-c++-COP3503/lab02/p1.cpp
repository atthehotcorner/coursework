#include <iostream>

int main() {
  char name;
  int count = 10;
  
  name = 'v';

  std::cout << "What is your name?" << std::endl;
  std::cin >> name;

  std::cout << "How many tigers should I display, " << name  << "?" << std::endl;
  std::cin >> count;
  std::cout << "Ok, " << name << ", here are your " << count << " tigers:" << std::endl;

  for (int i = 0; i < count; i++) {
    std::cout << "tiger " << std::endl;
  }

  return 0;
}
