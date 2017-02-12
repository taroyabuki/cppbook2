#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5, 1, 4 };
  auto begin = v.cbegin();
  auto end = v.cend();

  int target = 3;
  auto pos = find(begin, end, target);
  if (pos == end) cout << "見つからない\n";
  else cout << "見つかった：" << *pos << endl;
  //出力値：見つかった：3

  target = 6;
  pos = find(begin, end, target);
  if (pos == end) cout << "見つからない\n";
  else cout << "見つかった：" << *pos << endl;
  //出力値：見つからない
}