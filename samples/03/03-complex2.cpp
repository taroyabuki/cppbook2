#include <iostream>
#include <complex>
using namespace std;


int main() {
  using cplx = complex<double>;

  //構文4
  cplx* p = new cplx;
  //cplx* p = new cplx();//OK
  //cplx* p = new cplx{};//OK
  cout << *p << endl;//出力値：(0,0)

  //構文5
  cplx* q = new cplx(3., 4.);
  //cplx* q = new cplx{ 3., 4. };//OK
  cout << *q << endl;//出力値：(3,4)

  //構文6
  cplx* r = new cplx(*q);
  //cplx* r = new cplx{ *q };//OK
  cout << *r << endl;//出力値：(3,4)

  cout << (*q).real() << endl;//出力値3（冗長）
  cout << (*q).imag() << endl;//出力値4（冗長）

  cout << q->real() << endl;//出力値3
  cout << q->imag() << endl;//出力値4

  delete p;
  delete q;
  delete r;
}