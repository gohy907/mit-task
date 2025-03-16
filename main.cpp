#include <iostream>

unsigned long long fibonacci(int n, unsigned long long a,
                             unsigned long long b) {
  if (n == 1)
    return a;
  if (n == 2)
    return b;

  return fibonacci(n - 1, b, a + b);
}

int main() {
  int n;
  std::cin >> n;
  if (n >= 1) {
    std::cout << fibonacci(n, 0, 1) << std::endl;
  }
}
