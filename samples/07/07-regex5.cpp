#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "abc,123 xyz";
  regex rx(R"(,|\s)");//分割に使う文字列（カンマまたは空白）
  sregex_token_iterator it(str.begin(), str.end(), rx, -1);
  sregex_token_iterator end;
  while (it != end) {
    cout << *it++ << endl;//取り出して、次に移動
  }
  /*
  出力値：
  abc
  123
  xyz
  */
}