
#include <iostream>
#include <cmath>

int main() {
  int x = 0;
  std::cout << "Enter a number: ";
  std::cin >> x;
  if (x > 0) {
    std::cout << "The number is positive." << std::endl;
  } else if (x < 0) {
    std::cout << "The number is negative." << std::endl;
  } else {
    std::cout << "The number is zero." << std::endl;
  }
  return 0;
}