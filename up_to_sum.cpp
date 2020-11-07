#include <iostream>
using namespace std;

int up_to_sum(int num)
{
  int result = 1;
  for (int i = 0; i < num; i++)
  {
    result = result + 1;
  }
  return result;
}

int main()
{
  int num;
  cout << "Enter a number: "
       << "\n";
  cin >> num;

  int sum = up_to_sum(num);
  cout << "Sum of natural numbers up to " << num << " is " << sum << endl;
  return 0;
}