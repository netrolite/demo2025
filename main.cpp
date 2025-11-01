#include <iostream>

int main() {
  unsigned int fib_nums[47] = {1, 2};
  unsigned short fib_bits[47] = {};
  unsigned long n;
  std::cin >> n;

  if (n <= 2) {
    if (n == 1)
      std::cout << "1" << std::endl;
    else
      std::cout << "10" << std::endl;
    return 0;
  }

  unsigned int last_fib_num_idx = 1;
  for (; fib_nums[last_fib_num_idx] < n; ++last_fib_num_idx) {
    fib_nums[last_fib_num_idx + 1] =
        fib_nums[last_fib_num_idx - 1] + fib_nums[last_fib_num_idx];
  }

  fib_bits[last_fib_num_idx - 1] = 1;
  n -= fib_nums[last_fib_num_idx - 1];

  for (int i = last_fib_num_idx - 2; n != 0; --i) {
    if (fib_nums[i] <= n) {
      n -= fib_nums[i];
      fib_bits[i] = 1;
    }
  }

  for (int i = last_fib_num_idx - 1; i >= 0; --i) {
    std::cout << fib_bits[i];
  }
  std::cout << std::endl;
}
