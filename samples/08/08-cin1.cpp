#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "文字列を入力して、Enterキーを押してください。\n";
  string str;
  cin >> str;//標準入力から文字列を読み込む
  cout << "入力された文字列は「" << str << "」です。\n";
}