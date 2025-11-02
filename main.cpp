#include <cstring>
#include <iostream>

bool is_isogram(const char *str) {
  unsigned int len = strlen(str);
  if (len == 0)
    return true;

  unsigned int char_occuurences[128] = {};
  for (unsigned int i = 0; i < len; ++i) {
    char cur_char = str[i];
    bool is_uppercase = cur_char >= 65 and cur_char <= 90;
    if (is_uppercase) {
      cur_char += 32; // offset to make lowercase
    }

    if (char_occuurences[cur_char] == 1)
      return false;
    char_occuurences[cur_char] = 1;
  }

  return true;
}

int main() {
  std::cout << is_isogram("iiiiiii") << '\n';
  std::cout << is_isogram("uncopyrightable") << '\n';
  std::cout << is_isogram("mo0se") << '\n';
  std::cout << is_isogram("fgzbma") << '\n';
  return 0;
}
