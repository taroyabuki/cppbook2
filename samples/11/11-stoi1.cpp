#include <iostream>
#include <string>
using namespace std;

int main() {
  int a;
  try {
    a = stoi("abc");
    cout << a << endl;
  }
  catch (invalid_argument& e) {
  //catch (exception& e) {//OK
    cerr << e.what() << endl;//出力例：invalid stoi argument
  }
  cout << "正常終了\n";//出力値：正常終了
}