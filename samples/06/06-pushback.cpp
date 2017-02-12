#include <iostream>
#include <vector>
#include <complex>
using namespace std;

using cplx = complex<double>;

int main() {
  vector<cplx> v;

  cplx z(3., 4.);//オブジェクトの構築
  v.push_back(z);//要素の追加（コピー）

  v.push_back(cplx(1., 2.));//オブジェクトの移動
  v.emplace_back(1., 2.);   //OK

  for (auto x : v)  cout << x << ", ";
  cout << endl;//出力値：(3,4), (1,2), (1,2),
}