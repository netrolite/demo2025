#include <iostream>

unsigned int strsum(const char *str) {
  unsigned int sum = 0;
  while (*str != 0) {
    sum += (unsigned int)*str;
    ++str;
  }

  return sum;
}

int main() { return 0; }
