#include <iostream>

int main() {
  int n = 10;
  int *ptr = &n;

  std::cout << ptr << std::endl;
  std::cout << *ptr << std::endl;

  *ptr = 20;

  std::cout << ptr << std::endl;
  std::cout << *ptr << std::endl;

  /*
     возможные операции с указателями:
     1) dereferencing: *(ptr)
     2) assignment: ptr = ptr2
     3) pointer arithmetic (addition/subtraction): +(ptr, 1), -(ptr, 1)
     4) subtract one pointer from another -(ptr1, ptr2)
     6) comparison: <,>,==,!=,<=,>=
  */
}
