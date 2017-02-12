#include <iostream>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

int main() {
  double d1 = 0.1;
  double d2 = d1 + d1 + d1 + d1 + d1 + d1 + d1 + d1 + d1 + d1;
  cout << (d2 == 1.0 ? "等しい" : "等しくない") << endl;
  //出力値：等しくない

  using real = boost::multiprecision::cpp_dec_float_50;
  real r1("0.1");
  real r2 = r1 + r1 + r1 + r1 + r1 + r1 + r1 + r1 + r1 + r1;
  cout << (r2.compare(1) == 0 ? "等しい" : "等しくない") << endl;
  //出力値：等しい

  real r3(0.1);//間違い
  real r4 = r3 + r3 + r3 + r3 + r3 + r3 + r3 + r3 + r3 + r3;
  cout << (r3.compare(1) == 0 ? "等しい" : "等しくない") << endl;
  //出力値：等しくない

  using rational = boost::multiprecision::cpp_rational;
  rational r(3602879701896397, 36028797018963968);
  cout << setprecision(20) << hexfloat << r.convert_to<double>() << endl;
  //出力値：0x1.999999999999a0000000p-4

  double d = 0.1;
  cout << (r.compare(d) == 0 ? "等しい" : "等しくない") << endl;
  //出力値：等しい
}