#include <cstring>
#include <iostream>

// decimal to binary converter
int main() {
  char str[65] = {};
  std::cin >> str;
  unsigned long long result = str[0] - '0';

  for (unsigned short i = 1; i < strlen(str); ++i) {
    result = result * 2 + (str[i] - '0');
  }

  std::cout << result << std::endl;
  return 0;
}
