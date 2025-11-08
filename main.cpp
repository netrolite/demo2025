#include <iostream>

void str_to_lower(char *str) {
  while (*str != 0) {
    char ch = *str;
    if (ch >= 'A' && ch <= 'Z') {
      int offset = 'a' - 'A';
      *str += offset;
    }
    ++str;
  }
}

// wroldaaa
// worlld
/*
  r = 1
  k = 1
  q = 1
  o = 1
  d = 1
  l = 1
  w = 1
*/
const int CHARS_ARR_LEN = 128;

bool is_char_lower(char ch) {
  if (ch >= 'a' && ch <= 'z') {
    return true;
  }
  return false;
}

bool is_anagram(const char *str1, const char *str2) {
  unsigned short char_occurences_src[CHARS_ARR_LEN] = {};
  unsigned short char_occurences_target[CHARS_ARR_LEN] = {};
  int offset_to_lower_char = 'a' - 'A';

  for (; *str1 != 0; ++str1) {
    if (*str1 == ' ')
      continue;

    if (is_char_lower(*str1)) {
      ++char_occurences_src[*str1];
    } else {
      ++char_occurences_src[*str1 + offset_to_lower_char];
    }
  }

  for (; *str2 != 0; ++str2) {
    if (*str2 == ' ')
      continue;

    if (is_char_lower(*str2)) {
      ++char_occurences_target[*str2];
    } else {
      ++char_occurences_target[*str2 + offset_to_lower_char];
    }
  }

  for (int i = 0; i < CHARS_ARR_LEN; ++i) {
    if (char_occurences_src[i] != char_occurences_target[i]) {
      return false;
    }
  }

  return true;
}

int main() {
  char str1[] = "student";
  char str2[] = "s tUd nte";
  std::cout << is_anagram(str1, str2) << std::endl;
  return 0;
}
