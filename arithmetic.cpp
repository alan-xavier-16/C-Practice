#include <iostream>  // Allows program to perform input and output
using namespace std; // Uses names from std namespace

int main()
{
  int num1;
  int num2;

  cout << "Enter two integers: "
       << "\n";
  cin >> num1 >> num2;

  cout << "The sum is " << num1 + num2 << "\n";
  cout << "The product is " << num1 * num2 << "\n";
  cout << "The difference is " << num1 - num2 << "\n";
  cout << "The quotient is " << num1 / num2 << "\n";
  cout << "The remainer is " << num1 % num2 << "\n";

  return 0;
}