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

  //コピーコンストラクタ（割愛）
  //コピー代入演算子（割愛）
  //ムーブコンストラクタ（割愛）

  //ムーブ代入演算子
  Person& operator=(Person&& x) noexcept {
    cout << "moved\n";
    if (this != &x) {//両辺が同じなら何もしない
      delete name;
      name = x.name;
      x.name = nullptr;
      age = x.age;
      vec = move(x.vec);
    }
    return *this;
  }
};

struct Wrapper {
  Person person;
  //基本メンバ関数は暗黙的に定義されることを期待する
};

int main() {
  Wrapper w1, w2;
  *w1.person.name = "Taro";
  w2 = move(w1);
  cout << *w2.person.name << endl;//出力値：Taro
}