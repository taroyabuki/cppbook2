#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v{ 2, 3, 5 };
  try {
    cout << v.at(3) << endl;
  }
  catch (out_of_range& e) {
  //catch (exception& e) {//OK
    cerr << e.what() << endl;//出力例：invalid vector<T> subscript
  }
  cout << "正常終了\n";      //出力値：正常終了
}