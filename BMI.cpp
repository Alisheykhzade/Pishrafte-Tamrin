#include <iostream>
#include <math.h>

using namespace std;

int
main ()
{
  float w, h, bmi;

  cout << "vazn ra be Kg vared konid: ";
  cin >> w;
  cout << "ghad ra be meter vared konid: ";
  cin >> h;

  bmi = w / pow (h, 2);

  if (bmi < 18.5)
    cout << "vazeiat BMI shoma: " << "underweight";
  else if (18.5 < bmi && bmi < 24.9)
    cout << "vazeiat BMI shoma: " << "normal";
  else if (25 < bmi && bmi < 29.9)
    cout << "vazeiat BMI shoma: " << "overweight";
  else if (30 < bmi && bmi < 34.9)
    cout << "vazeiat BMI shoma: " << "obese";
  else
    cout << "vazeiat BMI shoma: " << "extremely obese";

  return 0;
}
