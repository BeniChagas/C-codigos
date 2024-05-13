#include <iostream>

int soma(int x, int y) {
  return x + y;
}

int main() {
  int result = soma(2, 2);
  std::cout << "O resultado da soma é: " << result << std::endl;
  return 0;
}