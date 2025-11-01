#include <iostream>

#define ull unsigned long long

int main() {
  ull numerator, denominator;
  std::cin >> numerator >> denominator;

  ull remainder = 0;
  do {
    std::cout << numerator / denominator << " ";
    remainder = numerator % denominator;
    numerator = denominator;
    denominator = remainder;
  } while (remainder != 0);

  return 0;
}
