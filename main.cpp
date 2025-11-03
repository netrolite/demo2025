#include <cstring>
#include <iostream>

// world
// worldkq

// hello
// ehelol
/*
  target:
  h - 1
  e - 1
  l - 2
  o - 1

  given string:
  h - 1
  e - 2
  l - 2
  o - 1
*/

char *str_to_lower(char str[]) {
  unsigned int len = strlen(str);

  for (unsigned int i = 0; i < len; ++i) {
    char cur_char = str[i];
    bool is_uppercase = cur_char >= 65 and cur_char <= 90;
    if (is_uppercase) {
      str[i] += 32; // offset to make lowercase
    }
  }

  return str;
}

bool is_subset(const char *str1, const char *target) {
  char target_char_occurences[127]{};
  char str_char_occurences[127]{};
  return true;
}

int main() {
  char target[] = "hEEllo";
  char str[] = "Elellhlo";
  char *target_lower = str_to_lower(target);
  char *str_lower = str_to_lower(str);
}
