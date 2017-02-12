#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "文字列を入力して、Enterキーを押してください（Ctrl+Zで終了）。\n";
  string str;
  while (cin >> str) {//Ctrl+Zが入力されるまで繰り返す
    cout << "入力された文字列は「" << str << "」です。\n";
  }
  cout << "終了しました。\n";
}