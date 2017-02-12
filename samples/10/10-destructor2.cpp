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
  A a; //Aオブジェクトをメンバに持つ
  Person(const string& newName) : name(newName) {}

  ~Person() {
    cout << name << "は解体された\n";
  }
};

int main() {
  Person a1("Taro");
  Person* pA2 = new Person("Jiro");
  delete pA2;
}