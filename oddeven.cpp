#include <iostream>  // Allows program to perform input and output
using namespace std; // Uses names from std namespace

int main()
{
  int num;
  cout << "Enter an integer: "
       << "\n";
  cin >> num;

  if (num % 2 == 0)
  {
    cout << num << " is even." << endl;
  }
  else if (num % 2 != 0)
  {
    cout << num << " is odd." << endl;
  }
}