#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 1, 2, 3, 4, 5 };
  
  //前から順番に処理する（変更不可）
  for (auto i = v.cbegin(); i != v.end(); ++i) {
    //*i *= 10;//エラー（iはconst）
    cout << *i << ", ";
  }
  cout << endl;//出力値：1, 2, 3, 4, 5,

  //前から順番に処理する（変更可）
  for (auto i = v.begin(); i != v.end(); ++i) {
    *i *= 10;
    cout << *i << ", ";
  }
  cout << endl;//出力値：10, 20, 30, 40, 50,

  for (auto i = v.crbegin(); i != v.crend(); ++i) {
    //*i *= 10;//エラー（iはconst）
    cout << *i << ", ";
  }
  cout << endl;//出力値：50, 40, 30, 20, 10,

  //後ろから順番に処理する（変更可）
  for (auto i = v.rbegin(); i != v.rend(); ++i) {
    *i *= 10;
    cout << *i << ", ";
  }
  cout << endl;//出力値：500, 400, 300, 200, 100,
}