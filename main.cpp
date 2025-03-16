#include <iostream>

void fibonacci(int n) {
  if (n < 1) {
    return;
  }

  std::cout << 0 << std::endl;
  if (n == 1) {
    return;
  }
  std::cout << 1 << std::endl;
  if (n == 2) {
    return;
  }
  unsigned long long a = 0;
  unsigned long long b = 1;
  unsigned long long c;
  while ((n - 2) > 0) {
    c = a + b;
    std::cout << c << std::endl;
    a = b;
    b = c;
    --n;
  }
}

int main() {
  int n;
  std::cin >> n;
  fibonacci(n);
}
