#include <iostream>

int main() {
  const int coefs[] = {1, 2, 1};
  int x;
  std::cin >> x;
  int coefs_len = sizeof(coefs) / sizeof(coefs[0]);

  // coef(n - 1) * x ^ {n - 1} + coef(n - 2) * x ^ {n - 2} + ... coef(1)

  int sum = 0;
  int x_raised = 1;
  for (int i = 0; i < coefs_len; ++i) {
    sum += coefs[coefs_len - i - 1] * x_raised;
    x_raised *= x;
  }

  std::cout << sum << std::endl;

  return 0;
}
