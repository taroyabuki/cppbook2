#include <iostream>
#include <string>
using namespace std;

struct Person {
  string* name;
  int age;
  Person() : name(new string) {}
  ~Person() { delete name; }

  //コピーコンストラクタ
  Person(const Person& x) : name(new string(*(x.name))), age(x.age) {}

  //コピー代入演算子
  Person& operator=(const Person& x) {
    if (this != &x) {                //両辺が同じなら何もしない
      auto tmp = new string(*x.name);//もとのnameをコピーしてアドレスを取得する
      delete name;                   //古いnameを解体する
      name = tmp;                    //新しいアドレスを保存する
      age = x.age;
    }
    return *this;
  }
};

int main() {
  Person taro;
  *taro.name = "Taro";
  taro.age = 32;

  Person A;
  A = taro;

  *taro.name = "Jiro";
  cout << *A.name << " (" << A.age << ")\n";//出力値：Taro (32)
}