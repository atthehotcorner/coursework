#include <iostream>
#include "node.h"
#include "llist.h"

int main() {
  llist* mylist = new llist();
  
  // insert even # to 16
  for (int i=16; i > 0; i=i-2) mylist->insert(i);
  mylist->printContents();
  std::cout << "\nThe count is " << mylist->size() << std::endl;

  mylist->remove(2);
  mylist->printContents();
  std::cout << "\nThe count is " << mylist->size() << std::endl;

  std::cout << "Clearing" << std::endl;
  mylist->clear();
  mylist->printContents();

  // clean up
  mylist->clear();
  delete mylist;

  return 0;
}
