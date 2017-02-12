#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;

  //クラス定義の中でメンバ関数を定義する
  void show() {
    cout << name << " (" << age << ")\n";
  }
};

int main() {
  Person taro;
  taro.name = "Taro";
  taro.age = 32;
  taro.show(); //出力値：Taro (32)
}