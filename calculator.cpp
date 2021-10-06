#include <iostream>
#include <math.h>
using namespace std;
int
main ()
{
  double a, b;
  string input;

  cout << "Addad aval ra vared konid ";
  cin >> a;
  cout << "Amalgar ra az mavared zir vared konid" << endl <<
    "zarb-taghsim-radical-sin-cos-cot-tan-factorial ";
  cin >> input;
  if(input == "taghsim" || input == "zarb") {
      cout << "Addad dovom ra vared konid ";
      cin >> b;
  }
    
  if (input == "taghsim")
    {
      if (b == 0)
	cout << "Gheyre mojaz";
      else
	cout << "taghsim: " << a / b;
    }
  if (input == "zarb")
    {
      cout << "zarb: " << a * b;
    }
  if (input == "radical")
    {
      cout << "radical: " << sqrt (a);
    }
  if (input == "sin")
    {
      cout << "sin: " << sin ((a * 3.14) / 180);
    }
  if (input == "cos")
    {
      cout << "cos: " << cos ((a * 3.14) / 180);
    }
  if (input == "tan")
    {
      cout << "tan: " << tan ((a * 3.14) / 180);
    }
  if (input == "cot")
    {
      cout << "cot: " << 1 / tan ((a * 3.14) / 180);
    }
  if (input == "factorial")
    {
      double factorial = 1;
      for (int i = 1; i <= a; i++)
	factorial = factorial * i;
      cout << "factorial: " << factorial;
    }
}
