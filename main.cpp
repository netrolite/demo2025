#include <iostream>

// 0 1 2 3 4 5 7 0 1

int main() {
  unsigned long long fib_n = 0;
  unsigned int modulo = 0;
  std::cin >> fib_n >> modulo;

  unsigned int seq_len = 0;
  unsigned int fib_a = 0;
  unsigned int fib_b = 1;

  do {
    ++seq_len;

    unsigned int new_fib_b = (fib_a + fib_b) % modulo;
    fib_a = fib_b;
    fib_b = new_fib_b;
  } while (fib_a != 0 || fib_b != 1);

  fib_n = fib_n - seq_len * (fib_n / seq_len);

  fib_a = 0;
  fib_b = 1;
  for (int i = 0; i < fib_n; ++i) {
    unsigned int new_fib_b = (fib_a + fib_b) % modulo;
    fib_a = fib_b;
    fib_b = new_fib_b;
  }

  std::cout << fib_a << '\n';

  return 0;
}
