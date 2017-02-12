#include <iostream>
#include <string>
using namespace std;

class Person {
  string name;//classのメンバは指定がなければprivate
public:
  int age;
};

int main() {
  Person taro;
  //taro.name = "Taro";//エラー（nameはprivate）
  taro.age = 32;//OK
}