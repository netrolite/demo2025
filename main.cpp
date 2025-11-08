#include <cstring>
#include <iostream>

int main(int argc, char *argv[]) {
  for (int i = 0; i < argc; ++i) {
    for (int j = 0; j < strlen(argv[i]); ++j) {
      char c = argv[i][j];
      bool is_uppercase = c >= 'a' and c <= 'z'; // matvey moroZOV
      if (is_uppercase) {
        std::cout << (char)(c - 'a' + 'A');
      } else {
        std::cout << c;
      }
    }
    std::cout << '\n';
  }

  char c1 = 127;
  char c2 = 200;
  std::cout << c1 + c2 << '\n';
  auto y = c1 + c2;

  return 0;
}
