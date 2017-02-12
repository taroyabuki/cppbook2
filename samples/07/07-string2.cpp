#include <iostream>
#include <string>
using namespace std;

int main() {
  string str1 = "Hello, ";
  string str2 = "World!";

  //4文字目
  cout << str1[4] << endl;//出力値：o

  //追記
  str1 += str2;
  cout << str1 << endl;//出力値：Hello, World!

  //比較
  cout << (str1 == str2) << endl;//出力値：0（等しくない）
  cout << str1.compare("Hello, Z!") << endl;//出力値：-1（str1が辞書順で前）

  //検索（前から）
  cout << str1.find("World") << endl;//出力値：7（7文字目に"World"がある）
  if (str1.find("world") == string::npos) cout << "見つからない\n";//出力値：見つからない

  //検索（後ろから）
  cout << str1.rfind("o") << endl;//出力値：8（8文字目に"o"がある）

  //置換（7文字目からの5文字を置き換える）
  str1.replace(7, 5, "Nippon");
  cout << str1 << endl;//出力値：Hello, Nippon!

  //部分文字列（7文字目から6文字を取り出す）
  cout << str1.substr(7, 6) << endl;//出力値：Nippon
}