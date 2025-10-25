#include <iostream>

// int M[] - M - constant pointer to variable data
// int *M - M - variable pointer to variable data

// int size = size of array. can't be avoided
// str is also an array: char* str is equivalent to char str[]

void print(const int *M, int size, const char str[] = "") {
  // for (int i = 0; i < sizeof(M) / sizeof(M[0]); ++i) { // error
  // can't use sizeof because it's evaluated at compile time

  std::cout << str;
  for (int i = 0; i < size; ++i) {
    std::cout << M[i] << " ";
  }
  std::cout << std::endl;
}

int main() {
  int n;
  std::cout << "Array size: ";
  std::cin >> n;
  if (n < 1)
    return 0;

  // new array
  int *M = new int[n];

  for (int i = 0; i < n; ++i) {
    M[i] = rand() % 100;
  }

  for (int i = 0; i < n; ++i) {
    std::cout << M[i] << " ";
  }
  std::cout << std::endl;

  print(M, n, "M = ");
  if (n >= 5)
    print(M, 5, "first 5 elements = ");
  if (n >= 2)
    print(M + 2, n, "elements starting from second element");

  int M2[] = {12, 64, 43, 74, 32, 13, 45, 74, 91, 11};

  delete[] M;

  char str1[] = {'h', 'e', 'l', 'l', '\0'};
  int size1 = sizeof(str1) / sizeof(str1[0]);
  std::cout << "size1" << size1 << std::endl;

  for (int i = 0; i < size1; ++i) {
    std::cout << str1[i] << " ";
  }
  std::cout << std::endl;

  std::cout << str1 << std::endl; // можно выйти за пределы (до ближайшего \0)

  print(M2, 4);

  return 0;
}
