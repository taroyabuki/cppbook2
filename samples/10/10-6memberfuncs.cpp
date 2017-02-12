#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
};

//オブジェクトを構築して返す関数
Person f() {
  Person masato;
  masato.name = "Masato";
  masato.age = 0;
  return masato;
}

int main() {
  //ケース1
  Person taro;
  taro.name = "Taro";
  taro.age = 32;

  //ケース2
  Person A(taro);//コピー
  //Person A = taro;//OK
  cout << A.name << endl;//出力値：Taro

  //ケース3
  Person B;
  B = taro;
  cout << B.name << endl;//出力値：Taro

  //ケース4
  Person C(f());
  //Person C = f();
  cout << C.name << endl;//出力値：Masato
}