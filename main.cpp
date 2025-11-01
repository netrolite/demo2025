#include <iostream>

int main() {
  const int coefs[] = {1, 2, 1};
  int x;
  std::cin >> x;
  int coefs_len = sizeof(coefs) / sizeof(coefs[0]);

  // coef(n - 1) * x ^ {n - 1} + coef(n - 2) * x ^ {n - 2} + ... coef(1)

  // int x_raised = 1;
  // for (int i = 0; i < coefs_len; ++i) {
  //   sum += coefs[coefs_len - i - 1] * x_raised;
  //   x_raised *= x;
  // }
  //
  // a3 * x3 + a2 * x2 + a1 * x1 + a0
  // sum = a0
  // 3x^3+4x^2+6x+6
  // coef = {6,5,4,3}
  // n = 4
  // x =1
  // 1 iter: sum = 3
  // sum = 3 * 1 + 4 = 7
  // sum = (3 * 1 + 4)*1 + 5
  // sum = ((3 * 1 + 4)*1 + 5)*1 + 6

  int sum = coefs[coefs_len - 1];
  for (int i = coefs_len - 2; i >= 0; --i) {
    sum = sum * x + coefs[i];
  }
  std::cout << sum << std::endl;

  return 0;
}
