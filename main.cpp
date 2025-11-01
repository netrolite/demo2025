#include <iostream>

int fib(unsigned int n) {
  unsigned int a = 1;
  unsigned int b = 2;
  if (n <= 1)
    return 1;
  else if (n == 2)
    return 2;

  for (unsigned int i = 2; i < n; ++i) {
    int tmp = b;
    b += a;
    a = tmp;
  }

  return b;
}

int main() {
  new int fib_nums = {};
  unsigned long n;
  std::cin >> n;
}
