#include <iostream>
#include <string>
using namespace std;

struct Person {
  string* name;
  int age;
  Person() : name(new string) {}
  ~Person() { delete name; }
};

int main() {
  Person taro;
  *taro.name = "Taro";
  taro.age = 32;

  Person A(taro);
  cout << *A.name << " (" << A.age << ")" << endl;//出力値：Taro (32)

  *taro.name = "Jiro";
  cout << *A.name << " (" << A.age << ")" << endl;//出力値：Jiro (32)
}//実行時エラー