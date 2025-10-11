#include <climits>
#include <iostream>

int main() {
  long long X = 0;
  std::cin >> X;

  int N = 0;
  std::cin >> N;
  long long *nums = new long long[N];

  for (int i = 0; i < N; ++i) {
    int num = 0;
    std::cin >> num;
    nums[i] = num;
  }

  long long closest_val = nums[0];
  long long smallest_diff = INT_MAX;

  for (int i = 0; i < N; ++i) {
    long long new_diff = std::abs(X - nums[i]);

    if (new_diff == smallest_diff || new_diff < smallest_diff) {
      closest_val = nums[i];
      smallest_diff = new_diff;
    }
  }

  std::cout << closest_val << std::endl;

  delete[] nums;
}
