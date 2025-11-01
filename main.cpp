#include <iostream>

#define ull unsigned long long

int main() {
  ull radius;
  std::cin >> radius;

  ull points_inside = 0;
  ull x = radius;
  ull rad_squared = radius * radius;

  for (ull y = 0; y <= radius; ++y) {
    while (true) {
      if (x * x + y * y <= rad_squared) {
        points_inside += x;
        break;
      } else {
        --x;
      }
    }
  }

  points_inside = points_inside * 4 + 1;
  std::cout << points_inside << std::endl;

  return 0;
}
