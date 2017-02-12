#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = { 2, 3, 5 };
  cout << v.at(3) << endl;//ここで実行時エラーが発生する
  cout << "正常終了\n";   //出力されない
}