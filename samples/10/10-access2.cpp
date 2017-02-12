#include <iostream>
#include <string>
using namespace std;

struct Person {
  int age;//structのメンバは指定がなければpublic
private:
  string name;
};

int main() {
  Person taro;
  //taro.name = "Taro";//エラー（nameはprivate）
  taro.age = 32;//OK
}