#include <cstring>
#include <iostream>

int main() {
  char str[65] = {};
  std::cin >> str;
  unsigned int str_len = strlen(str);
  unsigned long long result = 0;

  int power = 1;
  for (int i = str_len - 1; i >= 0; --i) {
    int cur_char_as_int;

    if (str[i] == '1') {
      cur_char_as_int = 1;
    } else {
      cur_char_as_int = 0;
    }

    result += cur_char_as_int * power;
    power *= 2;
  }

  std::cout << result << std::endl;
  return 0;
}
