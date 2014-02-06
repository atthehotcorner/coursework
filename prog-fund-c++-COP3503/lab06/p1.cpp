// Abraham Yuen
#include <iostream>
#include "lab06.h"

int main() {
  LinkedList* ll = new LinkedList();
  ll->append(0);
  ll->printContents();
  // Decap with 1
  std::cout << "Just lost " << ll->decapitate() << std::endl;
  ll->printContents();
  ll->append(1); ll->append(2);
  ll->printContents();
  // Decap with 2 or more
  std::cout << "Just lost " << ll->decapitate() << std::endl;
  ll->printContents();
  // Clear with 1
  std::cout << "Clearing..." << std::endl;
  ll->clear();
  ll->printContents();
  ll->append(1); ll->append(2); ll->append(3);
  ll->printContents();
  // Clear with 2 or more
  std::cout << "Clearing..." << std::endl;
  ll->clear();
  ll->printContents();
  std::cout << "If you see this, no problems ;)" << std::endl;
  return 0;
}
