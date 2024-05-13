#include <iostream>

int sub(int x, int y) {
  return x - y;
}

int main() {
  int result = sub(7, 2);
  std::cout << "O resultado da subtração é: " << result << std::endl;
  return 0;
}