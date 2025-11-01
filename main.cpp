#include <cmath>
#include <iostream>

int main() {
  int n = 0;
  std::cin >> n;
  int n_copy = n;

  int summ = 0;
  int n_len = 0;
  int deg10 = 1;

  // sum of digits + max 10 degree
  while (n != 0) {
    summ += n % 10;
    n /= 10;
    ++n_len;
    deg10 *= 10;
  }
  deg10 /= 10;

  // output digits left to right
  n = n_copy;
  while (deg10 != 0) {
    int digit = n / deg10;
    std::cout << digit << ", ";
    n %= deg10;
    deg10 /= 10;
  }
  std::cout << std::endl;

  std::cout << summ << std::endl;
}
