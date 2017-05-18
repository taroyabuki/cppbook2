#include <iostream>
#include <vector>
using namespace std;

void g1(vector<int> v) {
  v[0] = 100;//パラメータの変更
}

int g2(const vector<int>& v) {
  //v[0] = 10000;//エラー（vはconst）
  return v[0];
}

void g3(vector<int>& v) {
  v[0] = 1000;//パラメータの変更
}

auto h() {
  vector<int> v{ 11, 13, 17, 19 };
  return v;
}

int main() {
  vector<int> v1{ 2, 3, 5, 7 };

  g1(v1);
  cout << v1[0] << endl; //出力値：2（変わっていない）

  cout << g2(v1) << endl;//g2()はv1を変更しない

  g3(v1);
  cout << v1[0] << endl; //出力値：1000（g3での変更が反映された）

  auto v2(h());          //h()で構築したvectorを受け取る
  //auto v2 = h();       //OK
  for (auto x : v2) cout << x << ", ";
  cout << endl;          //出力値：11, 13, 17, 19, 
}