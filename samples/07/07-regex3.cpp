#include <iostream>
#include <regex>
using namespace std;

int main() {
  string str = "私の郵便番号は194-0013、彼女の郵便番号は153-0042です。";
  regex rx(R"((\d{3})-(\d{4}))");
  string tmp = "$1";//1番目の括弧の中だけ取り出す
  cout << regex_replace(str, rx, tmp) << endl;
  //出力値：私の郵便番号は194、彼女の郵便番号は153です。
}