#include <iostream>
#include <string>
#include <tuple>
using namespace std;

int main() {
  auto taro = make_pair("Taro", 32);
  //pair<string, int> taro("Taro", 32);//OK
  cout << taro.first << endl; //出力値：Taro
  cout << taro.second << endl;//出力値：32

  auto hanako = make_tuple("Hanako", 1980, 1, 28);
  //tuple<string, int, int, int> hanako("Hanako", 1980, 1, 28);//OK
  cout << get<0>(hanako) << endl;//出力値：Hanako
  cout << get<1>(hanako) << endl;//出力値：1980
  cout << get<2>(hanako) << endl;//出力値：1
  cout << get<3>(hanako) << endl;//出力値：28
}