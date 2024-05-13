#include <iostream>

int divisao(int x, int y) {
  return x / y;
}

int main() {
  int result = divisao(20, 4);
  std::cout << "O resultado da divisão é: " << result << std::endl;
  return 0;
}