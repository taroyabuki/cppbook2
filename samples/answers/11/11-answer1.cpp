#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> dictionary{ {"one", 1}, {"two", 2}, {"three", 3 } };
  
  try {
    string target = "four";
    cout << dictionary.at(target) << endl;//例外発生
  }
  catch (exception& e) {
    cerr << e.what() << endl;//出力例：invalid unordered_map<K, T> key
  }
  cout << "正常終了\n";//出力値：正常終了
}