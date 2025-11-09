#include <cstdint>
#include <cstring>
#include <iostream>

void uint32_to_ip(uint32_t ip, char address[]) {
  for (int i = 0; i < 32; ++i) {
    address[i] = '0';
  }
  address[32] = '\0';

  int idx = 31;
  while (ip != 0) {
    int digit = ip % 2;
    address[idx] = digit == 0 ? '0' : '1';
    ip /= 2;
    --idx;
  }

  int cur_char_idx = 0;
  for (int i = 7; i < 32; i += 8) {
    unsigned int power = 1;
    unsigned int part = 0;
    int lower_lim = i - 7;

    for (int j = i; j >= lower_lim; --j) {
      unsigned short cur_digit_as_int = address[j] == '0' ? 0 : 1;
      part += cur_digit_as_int * power;
      power <<= 1;
    }

    unsigned int hundreds = part / 100;
    unsigned int tens = (part / 10) % 10;
    unsigned int ones = part % 10;
    if (part >= 100 && part <= 999) {
      address[cur_char_idx++] = hundreds + '0';
      address[cur_char_idx++] = tens + '0';
      address[cur_char_idx++] = ones + '0';
    } else if (part >= 10) {
      address[cur_char_idx++] = tens + '0';
      address[cur_char_idx++] = ones + '0';
    } else {
      address[cur_char_idx++] = ones + '0';
    }

    bool is_last_iteration = i == 31;
    if (!is_last_iteration)
      address[cur_char_idx++] = '.';
  }

  address[cur_char_idx] = '\0';
}

int main() {
  char address[33];
  uint32_to_ip(534543545, address);

  for (int i = 0; i < strlen(address); ++i) {
    std::cout << address[i];
  }
  std::cout << std::endl;

  return 0;
}
