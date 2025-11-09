#include <cstring>
#include <iostream>

/*
  This iss an example!
  0123456789
  4th index is a space
  so everything before is a word
*/

void reverse_words(char str[]) {
  int cur_word_1st_char_idx = 0;
  int str_len = strlen(str);

  for (int i = 0; i <= str_len; ++i) {
    if (str[i] == ' ' || i == str_len) {
      int upper_lim = cur_word_1st_char_idx + (i - cur_word_1st_char_idx) / 2;
      for (int j = cur_word_1st_char_idx; j < upper_lim; ++j) {
        int offset = j - cur_word_1st_char_idx + 1;
        char tmp = str[j];
        str[j] = str[i - offset];
        str[i - offset] = tmp;
      }

      cur_word_1st_char_idx = i + 1;
    }
  }
}

int main() {
  char str[] = "This    is an example!!!";
  reverse_words(str);

  for (int i = 0; i < strlen(str); ++i) {
    std::cout << str[i];
  }
  std::cout << std::endl;

  return 0;
}
