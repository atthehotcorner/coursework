#include <iostream>

int max(int* a1Begin, int* a1End, int* a2Begin, int* a2End) {
  if (*a2Begin > *a1Begin  && a1Begin != a1End  && a2Begin != a2End) {
    *a1Begin = *a2Begin;
    //*a1Begin = &(a1 + 1);
    //*a2Begin = &(a2 + 1);
  }

  return 0;
}

int main() {
  int a1[] = {0,1,2,3};
  int a2[] = {0,4,2,3};

  max(&a1[0], &a1[3], &a2[0], &a2[3]);

  std::cout << a1[1] << std::endl;

  return 0;
}
