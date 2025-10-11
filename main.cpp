#include <iostream>

int main() {
  int N = 0;
  std::cin >> N;

  for (int i = 1; i <= N; ++i) {
    std::cout << i << std::endl;
    if (i % 5 == 0 && i % 3 == 0) {
      std::cout << "foo bar\n";
    } else if (i % 3 == 0) {
      std::cout << "foo\n";
    } else if (i % 5 == 0) {
      std::cout << "bar\n";
    }
  }
}
