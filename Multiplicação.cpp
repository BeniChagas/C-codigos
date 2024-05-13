#include <iostream>

int multi(int x, int y) {
  return x * y;
}

int main() {
  int result = multi(3, 2);
  std::cout << "O resultado da multiplicação é: " << result << std::endl;
  return 0;
}