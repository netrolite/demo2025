#include <iostream>

int main() {
  int arr[] = {1, 3, 5};
  std::cout << arr[1] << ' ' << *(arr + 1) << '\n';
  std::cout << 1 [arr] << '\n';

  *(arr + 1) = 1000;

  std::cout << arr[1] << ' ' << *(arr + 1) << '\n';

  int n = 10;
  std::cout << n << '\n';
  int *ptr_n = &n;
  *ptr_n = 300;
  std::cout << n << '\n';

  return 0;
}
