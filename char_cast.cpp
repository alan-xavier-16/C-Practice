#include <iostream>

int main()
{
  char symbol; // Character from user
  std::cout << "Enter a character: ";
  std::cin >> symbol;

  std::cout << symbol << "'s ASCII interger equivalent is " << static_cast<int>(symbol) << std::endl;

  return 0;
}
