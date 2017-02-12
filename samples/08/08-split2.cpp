#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int main() {
  ifstream datafile("test.dat");
  regex rx(R"(\s)");              //分割のための正規表現
  string str;                     //行を格納するための変数
  while (getline(datafile, str)) {//1行ずつ読み込む
    sregex_token_iterator it(str.begin(), str.end(), rx, -1);
    sregex_token_iterator end;
    string label = *it++;  //最初はラベル
    int total = 0;         //合計を計算するための変数
    while (it != end) {
      total += stoi(*it++);//文字列を整数に変換する
    }
    cout << label << ": " << total << endl;
  }
  datafile.close();
}