#include <iostream>

// decimal to binary converter
int main() {
  unsigned long long dec_num;
  std::cin >> dec_num;
  char bin_str[65] = {};

  unsigned short idx = 0;
  while (dec_num != 0) {
    bin_str[idx++] = (dec_num % 2) + '0'; // int to char of that int
    dec_num /= 2;
  }

  --idx;
  for (; idx >= 0; --idx) {
    std::cout << bin_str[idx];
  }
  std::cout << std::endl;

  return 0;
}
