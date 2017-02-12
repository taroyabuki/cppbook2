#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
  unordered_map<string, int> dictionary{ { "one", 0 },{ "two", 2 },{ "three", 3 } };
  //{ "one", 0 }は後で{ "one", 1 }に修正する。

  cout << dictionary["two"] << endl;//出力値：2

  dictionary["one"] = 1;//値の更新

  //存在しないキーを使うと規定値（数の場合は0）でマップに登録される
  cout << dictionary["four"] << endl;//出力値：0

  //検索するだけなら要素が登録されることはない
  if (dictionary.find("five") == dictionary.end()) cout << "not found\n";
  //出力値：not found

  dictionary["five"] = 5;//ペアの追加

  //unordered_mapについてのループ
  for (const auto& p : dictionary) {
    cout << p.first << ": " << p.second << endl;
  }
  /*
  出力例：
  one: 1
  two: 2
  three: 3
  five: 5
  four: 0
  */
}