#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
  string name;
  int age;
public:
  Person(const string& newName, int newAge) : name(newName), age(newAge) {}
  void eat() { cout << "eat()\n"; }
  virtual void show();
  virtual ~Person() {}//仮想デストラクタ（後述）
};

void Person::show() { cout << name << " (" << age << ")\n"; }

class Student : public Person {
  int id;
public:
  Student(const string& newName, int newAge, int newId) : Person(newName, newAge), id(newId) {}
  void study() { cout << name << " (id:" << id << "): study()\n"; }
  void show() override;
};

void Student::show() {//メンバ関数show()のオーバーライド
  cout << id << ": " << name << " (" << age << ")\n";
}

int main() {
  Person p("Taro", 32);
  p.show();//出力値：Taro (32)

  Student s("Hanako", 22, 1);
  s.show();//出力値：1: Hanako (22)

  //Person*の配列に2つのオブジェクトのアドレスを格納する
  Person* people[2] = { &p, &s };
  for (auto person : people) {
    person->show();
  }
  //出力値：Taro (32)
  //出力値：1: Hanako (22)
}