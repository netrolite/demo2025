#include <cstring>
#include <iostream>

bool starts_with(char *src, char *target) {
  for (int i = 0; i < strlen(target); ++i) {
    if (target[i] != src[i])
      return false;
  }
  return true;
}

int is_substr(char *a, char *b) {
  // a = "hello";
  // b = "ll";
  int i = 0;
  while (*a != 0) {
    if (starts_with(a, b)) {
      return i;
    }
    ++a;
    ++i;
  }

  return false;
}

void replace_one(char *str) {
  char one[] = "one";
  // hiohihi
  // hi1hi

  while (*str != 0) {
    if (starts_with(str, one)) {
      *str = '1';
      for (int j = 1; j < strlen(str); ++j) {
        str[j] = str[j + 2];
      }
      return;
    }
    ++str;
  }
}

char *replace(char *str, char *target, char *replacement, char *buf) {
  for (int i = 0; i < strlen(str); ++i) {
    buf[i] = str[i];
  }

  std::cout << buf << std::endl;
  return buf;
}

int main(int argc, char *argv[]) {
  char *str = argv[1];
  char *target = argv[2];
  char *replacement = argv[3];
  char buf[128] = {};
  char *result = replace(str, target, replacement, buf);

  std::cout << result << std::endl;

  return 0;
}
