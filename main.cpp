#include <cstring>
#include <iostream>

unsigned int strsum(const char *str) {
  unsigned long long sum = 0;

  for (unsigned long long i = 0; i < strlen(str); ++i) {
    sum += str[i];
  }

  return sum;
}

int main() { std::cout << strsum("Hello, world!") << '\n'; }
