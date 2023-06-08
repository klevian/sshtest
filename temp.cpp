#include <iostream>

void temp(int&, int&);

int main()
{
  using namespace std;

  int a, b;
  cout << "Enter number a = ";
  cin >> a;
  cout << "Enter number b = ";
  cin >> b;

  cout << "Number a = " << a << ", Number b = " << b << endl;

  temp(a, b);
  cout << "After swap " << endl;  
  cout << "Number a = " << a << ", Number b = " << b << endl;

  
  return 0;
}


void temp(int& a, int& b)
{
  int temp = 0;
  temp = a;
  a = b;
  b = temp;
}
