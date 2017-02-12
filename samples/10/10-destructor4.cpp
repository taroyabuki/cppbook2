#include <iostream>
#include <string>
#include <memory>
using namespace std;

struct A {
  ~A() {
    cout << "Aオブジェクトは解体された\n";
  }
};

struct Person {
  string name;
  shared_ptr<A> pA;

  //Aオブジェクトをフリーストアに構築するコンストラクタ
  Person(const string& newName) : name(newName), pA(new A) {}

  //Aオブジェクトを解体するデストラクタ
  ~Person() {
    //delete pA;//不要
    cout << name << "は解体された\n";
  }
};

int main() {
  Person a1("Taro");
  auto pA2 = make_shared<Person>("Jiro");
  //delete pA2;//不要
}