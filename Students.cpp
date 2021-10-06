#include <iostream>

using namespace std;

int
main ()
{
  string nam, famil;
  float a, b, c, m;

  cout << "nam daneshjoo ra vared konid ";
  cin >> nam;
  cout << "famil daneshjoo ra vared konid ";
  cin >> famil;
  cout << "nomre aval daneshjoo ra vared konid ";
  cin >> a;
  cout << "nomre dovom daneshjoo ra vared konid ";
  cin >> b;
  cout << "nomre sevom daneshjoo ra vared konid ";
  cin >> c;

  m = (a + b + c) / 3;

  if (m < 12)
      cout << "vazeiat " << nam << " " << famil << ": " << "fail";
  else if (12 <= m && m < 17)
      cout << "vazeiat " << nam << " " << famil << ": " << "normal";
  else if (17 <= m && m <= 20)
      cout << "vazeiat " << nam << " " << famil << ": " << "great";

  return 0;
}
