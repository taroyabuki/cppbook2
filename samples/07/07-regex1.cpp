#include <iostream>
#include <regex>
using namespace std;

int main() {
  regex rx(R"(\d{3}-\d{4})");//正規表現の定義

  string zip = "153-0042";//"153-0042"をチェック
  if (regex_match(zip, rx)) cout << "OK\n";
  else cout << "NG\n";
  //出力値：OK

  zip = "194-00134";//"194-00134"をチェック
  if (regex_match(zip, rx)) cout << "OK\n";
  else cout << "NG\n";
  //出力値：NG
}