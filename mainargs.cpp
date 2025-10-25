#include <iostream>

// argument count
// argument values
// char*env[] has \0 at the end
int main(int argc, char *argv[], char *env[]) {
  for (int i = 0; i < argc; ++i) {
    std::cout << i << ": " << argv[i] << std::endl;
  }

  std::cout << "==============env variables ==============\n";
  int j = 0;
  while (env[j] != nullptr) {
    std::cout << j << ": " << env[j] << std::endl;
    ++j;
  }

  return 0;
}
