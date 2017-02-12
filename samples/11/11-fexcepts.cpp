#include <iostream>
#include <cmath>
#include <cfenv>
using namespace std;

void report_fexcepts() {
  if (fetestexcept(FE_DIVBYZERO)) cout << "FE_DIVBYZERO\n";
  if (fetestexcept(FE_INEXACT))   cout << "FE_INEXACT\n";
  if (fetestexcept(FE_OVERFLOW))  cout << "FE_OVERFLOW\n";
  if (fetestexcept(FE_UNDERFLOW)) cout << "FE_UNDERFLOW\n";
  if (fetestexcept(FE_INVALID))   cout << "FE_INVALID\n";
  std::feclearexcept(FE_ALL_EXCEPT);//異常の履歴をクリアする。
  cout << endl;
}

int main() {
  double d;
  float f;

  d = 0;
  cout << 1.0 / d << endl;
  report_fexcepts();
  /*出力値：
  inf
  FE_DIVBYZERO
  */

  d = 1;
  for (int i = 0; i < 300; ++i) d *= 10;//d = 1e300;
  f = d;
  cout << f << endl;//出力値：inf
  report_fexcepts();
  /*出力値：
  inf
  FE_INEXACT
  FE_OVERFLOW
  */

  d = 1;
  for (int i = 0; i < 300; ++i) d /= 10;//d = 1e-300;
  f = d;
  cout << f << endl;
  report_fexcepts();
  /*出力値：
  0
  FE_INEXACT
  FE_UNDERFLOW
  */

  cout << sqrt(-1.0) << endl;
  report_fexcepts();
  /*出力例：
  -nan(ind)
  FE_INVALID
  */
}