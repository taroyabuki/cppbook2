#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5 };
  v[3] = 7;            //実行時エラー（vのサイズは3）
  cout << "正常終了\n";//出力されない
}