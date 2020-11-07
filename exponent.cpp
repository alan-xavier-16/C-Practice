#include <iostream>
using namespace std;

int raise_to_power(int base, int exp)
{
  int result = 1;
  for (int i = 0; i < exp; i++)
  {
    result = result * base;
  }
  return result;
}

int main() {
  // GET USER INPUT
  int base, exp;
  cout << "Enter a base and an exponent: " << endl;
  cin >> base >> exp;

  // CALCULATE EXPONENT OF BASE
  int raise = raise_to_power(base, exp);
  cout << base << "^" << exp << " is " << raise << endl;

  return 0;
}