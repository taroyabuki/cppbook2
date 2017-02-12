#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5, 1, 4 };

  int target = 6;
  auto pos = find(v.cbegin(), v.cend(), target);

  //いきなり*posにアクセスしてはいけない
  //cout << *pos << endl;//実行時エラーが発生する危険あり

  if (pos == v.cend()) {
    //末尾の次を指している、つまり見つからなかった
    cout << "見つからない\n";
  }
  else {
    //末尾の次を指している、つまり見つかった
    cout << *pos << endl;
  }
  //出力値：見つからない
}