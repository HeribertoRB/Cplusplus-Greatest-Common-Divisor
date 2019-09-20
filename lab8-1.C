using namespace std;
#include <iostream>

int gcd(int x, int y);

int main()
{
  int x,y;

  cout << "Enter a number for x: ";
  cin >> x;
  cout << "Enter a number for y: ";
  cin >> y;

  cout << "The greatest common divisors of " << x << " and " << y << " is " << gcd(x,y) << endl;

  return 0;
}

int gcd(int x, int y)
{
  int result;
  int n = 0;

  if(y == 0)
    return x;
  else if(x == 0)
    return y;
  else if(x == y)
    return x;
  else
    return gcd(y, x%y);
}
