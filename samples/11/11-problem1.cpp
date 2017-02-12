#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
  unordered_map<string, int> dictionary{ {"one", 1}, {"two", 2}, {"three", 3 } };
  
  string target = "four";
  cout << dictionary.at(target) << endl;//例外発生
  cout << "正常終了\n";//出力されない
}