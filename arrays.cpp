/*
arrays:
1. fixed size
2. ordered
3. same type
4. a set of elements

an array is a contiguous region of memory where all values are of the same type
so the cpu knows the size of each element and thus can index elements faster
(using pointer arithmetic??)

syntax:
int arr[3] = { 1, 2, 3 }
// or
int arr[3];
// or
int arr[] = { 1, 2, 3, 4 } // must initialize because length in brackets not
specified int arr[]; // error

int arr[3] = {}; // initialize array with zeroes
int arr[3] = { 1, 2 }; // initialize array with 1, 2, and 0

arr[0] = 1;
arr[1] = 2;
arr[2] = 3;

how to get the size of an array:
int size = sizeof(arr)/sizeof(arr[0])

int arr1[3] = {};
std::cout << arr1[10] << std::endl; // unsafe, but passes compilation

// 2D array
int matrix[3][2] = {
  {0, 1},
  {2, 3},
  {4, 5},

}
*/

#include <ctime>
#include <iostream>

// print array with random numbers in the range[a,b]
// a, b - user input
// print source array
// print A[0], A[N-1], A[1], A[N-2], A[2], A[N-3]
int main() {
  std::cout << "Input a and b: ";

  // set seed for rng from current time
  srand(time(nullptr));
  int a, b;
  std::cin >> a >> b;

  const int N = 7;
  int arr[N] = {}; // init with zeroes
  int arr_size = sizeof(arr) / sizeof(arr[0]);

  // fill array with random numbers (in range [a, b])
  for (int i = 0; i < N; ++i) {
    arr[i] = rand() % (b - a + 1) + a;
    std::cout << arr[i] << " ";
  }
  std::cout << '\n';

  for (int i = 0; i <= N / 2; ++i) {
    std::cout << arr[i] << ' '; // elem from left side
    if (i == N / 2)
      break;
    std::cout << arr[N - i - 1] << ' '; // elem from right side
  }

  std::cout << '\n';

  return 0;
}
