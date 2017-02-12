#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string* name;
  int age;
  vector<int> vec;
  Person() : name(new string) {}
  ~Person() { delete name; }

  //コピーコンストラクタ
  Person(const Person& x) : name(new string(*(x.name))), age(x.age), vec(x.vec) {
    cout << "copy\n";
  }

  //コピー代入演算子（割愛）

  //ムーブコンストラクタ
  Person(Person&& x) noexcept : name(x.name), age(x.age), vec(move(x.vec)) {
    x.name = nullptr;
    cout << "move\n";
  }
};

Person f() {
  Person taro;
  *taro.name = "Taro";
  taro.age = 32;
  taro.vec.push_back(1);
  taro.vec.push_back(2);
  taro.vec.push_back(3);
  return taro;
}

int main() {
  Person A(f());
  cout << *A.name << ": " << A.vec.size() << endl;//出力値：Taro 3
}