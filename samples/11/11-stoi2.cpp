#include <iostream>
#include <string>
using namespace std;

int main() {
  int a;
  try {
    a = stoi("18446744073709551616");
    cout << a << endl;
  }
  catch (out_of_range& e) {
  //catch (exception& e) {//OK
    cerr << e.what() << endl;//出力例：stoi argument out of range
  }
  cout << "正常終了\n";//出力値：正常終了
}