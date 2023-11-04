#include <iostream>

int main() {
  std::cout << "Weight" << std::endl;
  double weight;
  std::cin >> weight;
  std::cout << "Gravity" << std::endl;
  double width;
  std::cin >> width;
  std::cout << "Height" << std::endl;
  double height;
  std::cin >> height;
  double PEg = weight * width * height;
  std::cout << PEg << std::endl;
}
