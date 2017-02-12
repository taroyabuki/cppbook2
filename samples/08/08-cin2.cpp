#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "OK? (y/n) ";
  string str;
  cin >> str;
  if (str == "y") cout << "yが入力されました。\n";
  else if (str == "n") cout << "nが入力されました。\n";
  else cout << "不正な入力です。\n";
}