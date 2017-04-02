#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str = "Hello, World!";

  //[]を使う場合
  for (int i = str.size() - 1; i >= 0; --i) cout << str[i];
  cout << endl;

  //反復子を使う場合
  for (auto i = str.crbegin(); i != str.crend(); ++i) cout << *i;
  cout << endl;

  //アルゴリズムを使う場合
  reverse(str.begin(), str.end());
  cout << str << endl;

  //出力値：!dlroW ,olleH
}