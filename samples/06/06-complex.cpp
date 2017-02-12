#include <iostream>
#include <unordered_map>
#include <complex>
#include <string>
using namespace std;

using cplx = complex<double>;

//cplxをキーにするためのハッシュ関数を定義する
namespace std {
  template<>
  struct hash<cplx> {
    size_t operator()(const cplx& z) const {
      size_t h1 = hash<double>()(z.real());
      size_t h2 = hash<double>()(z.imag());
      return  h1 ^ h2;
    }
  };
}

int main() {
  //値をcplxにする場合
  unordered_map<string, cplx> dic1;

  cplx z(3., 4.);
  dic1["A"] = z;//コピー

  dic1["B"] = cplx(5., 12.);//ムーブ

  dic1.emplace("C", 10);//dic["C"] = cplx(10., 0.);と同じ結果になる

  dic1.emplace(piecewise_construct, forward_as_tuple("D"), forward_as_tuple(8., 15.));

  for (const auto& p : dic1) {
    cout << p.first << ": " << p.second << endl;
  }
  /* 出力例：
  A: (3,4)
  B: (5,12)
  C: (10,0)
  D: (8,15)
  */


  //キーをcplxにする場合
  unordered_map<cplx, int> dic2;//定義可能

  dic2[cplx(1, 2)] = 1;         //更新可能
  dic2[cplx(3, 4)] = 2;

  for (const auto& p : dic2) {
    cout << p.first << ", " << p.second << endl;
  }
  /* 出力例：
  (1,2), 1
  (3,4), 2
  */
}