#include <iostream>
#include <string>
using namespace std;

struct A {
  ~A() {
    cout << "Aオブジェクトは解体された\n";
  }
};

struct Person {
  string name;
  A* pA;

  //Aオブジェクトをフリーストアに構築するコンストラクタ
  Person(const string& newName) : name(newName), pA(new A) {}

  //Aオブジェクトを解体するデストラクタ
  ~Person() {
    delete pA;
    cout << name << "は解体された\n";
  }
};

int main() {
  Person a1("Taro");
  Person* pA2 = new Person("Jiro");
  delete pA2;
}