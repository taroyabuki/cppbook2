#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v = { 503, 87, 512, 61, 908, 170, 897, 275, 200, 426 };

  //二分探索のためには、まず並べ替えが必要
  sort(v.begin(), v.end());

  auto begin = v.cbegin();
  auto end = v.cend();

  int target = 200;//200を二分探索で探す
  auto pos = lower_bound(begin, end, target);
  //探索した値かどうかの確認
  if (pos == end || *pos != target) cout << "見つからない\n";
  else cout << "見つかった：" << *pos << endl;
  //出力値：見つかった：200

  target = 404;//404を二分探索で探す
  pos = lower_bound(begin, end, target);
  //探索した値かどうかの確認
  if (pos == end || *pos != target) cout << "見つからない\n";
  else cout << "見つかった：" << *pos << endl;
  //出力値：見つからない
}