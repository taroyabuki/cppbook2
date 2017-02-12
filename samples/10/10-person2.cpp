#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
  void show();//メンバ関数の宣言
};

//メンバ関数の定義
void Person::show() {
  cout << name << " (" << age << ")\n";
}

int main() {
  Person taro { "Taro", 32 };
  taro.show();//出力値：Taro (32)

  Person* pHanako = new Person { "Hanako" , 27};
  pHanako->show();//出力値：Hanako (27)
  delete pHanako;
}