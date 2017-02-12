#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
  stringstream ss;
  int n = 123;
  ss << "[" << setw(5) << n << "]" << endl;
  string result = ss.str();//文字列を出力する
  cout << result << endl;  //出力値：[ 123]（5桁表示）
}