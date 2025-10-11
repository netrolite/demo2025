#include <climits>
#include <iostream>

int main() {
  int x;
  int n;
  std::cin >> x >> n;

  long long min_diff = INT_MAX;
  long long closest_num;

  long long cur_num;

  for (int i = 0; i < n; ++i) {
    std::cin >> cur_num;
    long long cur_diff = std::abs(x - cur_num);

    if (cur_diff <= min_diff) {
      min_diff = cur_diff;
      closest_num = std::min(closest_num, cur_num);
    }
  }

  std::cout << closest_num << std::endl;

  return 0;
}
