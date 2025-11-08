// writing
// #include <fstream>
// #include <iostream>
//
// int main() {
//   std::ofstream out_file;
//   out_file.open("file.txt");
//   if (!out_file) {
//     std::cout << "Can not open file file.txt\n";
//   } else {
//     std::cout << "file.txt is open" << std::endl;
//   }
//
//   out_file << "Hello, world!\n";
//
//   for (char ch = 'a'; ch <= 'z'; ++ch) {
//     out_file.put(ch);
//   }
//
//   for (char ch = 'A'; ch <= 'Z'; ++ch) {
//     out_file.put(ch);
//   }
//
//   out_file.close();
//   return 0;
// }

// reading
#include <fstream>
#include <iostream>

int main() {
  std::ifstream in_file;
  in_file.open("file.txt");
  if (!in_file) {
    std::cout << "could not read file.txt" << std::endl;
    return 0;
  }

  int ch;
  while ((ch = in_file.get()) != EOF) {
    std::cout << ch << " ";
  }

  in_file.close();

  std::cout << std::endl;
  std::cout << static_cast<char>(200) << std::endl;

  return 0;

  ch += ('A' − 'a')
}
