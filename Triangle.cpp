#include <iostream>

using namespace std;

int
main ()
{
  int a, b, c;
  cout << "Zele aval ra vared konid: ";
  cin >> a;
  cout << "Zele dovom ra vared konid: ";
  cin >> b;
  cout << "Zele sevom ra vared konid: ";
  cin >> c;

  if (a > b + c || b > a + c || c > a + b)
      cout << "Mojaz nist";
  else
      cout << "Mojaz ast";

  return 0;
}
