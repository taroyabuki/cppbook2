#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec(5);//要素数5のベクタ（要素はすべて0）

  //添字の利用
  vec[2] = 102;
  //vec[5] = 105;//範囲外へのアクセス（運がよければ実行時エラー）

  //メンバ関数at()の利用
  vec.at(1) = 101;
  //vec.at(5) = 105;//範囲外へのアクセス。対処法あり（●項）

  //ポインタの利用
  int* p = &vec[0];
  *p = 100;
  *(p + 3) = 103;

  //反復子の利用
  auto it = vec.begin();//先頭要素を指す反復子
  *(it + 4) = 104;

  //すべての要素の表示
  for (auto i = vec.begin(); i != vec.end(); ++i) {
    cout << *i << ", ";
  }
  cout << endl;//出力値：100, 101, 102, 103, 104,
}