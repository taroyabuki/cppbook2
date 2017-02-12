#include <iostream>
#include <complex>
using namespace std;


int main() {
  using cplx = complex<double>;

  //構文1
  cplx a;
  //cplx a();//NG
  //cplx a{};//OK
  cout << a << endl;//出力値：(0,0)

  //構文2
  cplx b(3., 4.);
  //cplx b{ 3., 4. };//OK
  cout << b << endl;//出力値：(3,4)

  //構文3
  cplx c(b);
  //cplx c{ b };//OK
  //cplx c = b;//OK
  cout << c << endl;//出力値：(3,4)

  cplx d;//初期化してから
  d = b; //代入（効率が悪い）
  cout << d << endl;//出力値：(3,4)

  cout << b.real() << endl;//出力値3
  cout << b.imag() << endl;//出力値4
}