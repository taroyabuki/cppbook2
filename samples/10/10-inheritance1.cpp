#include <iostream>
#include <string>
using namespace std;

class Person {
  string name;
  int age;
public:
  Person(const string& newName, int newAge) : name(newName), age(newAge) {}
  void eat() { cout << name << ": eat()\n"; }
  void show() { cout << name << " (" << age << ")\n"; }
};

class Student : public Person {
  int id;
public:
  Student(const string& newName, int newAge, int newId) : Person(newName, newAge), id(newId) {}
  void study() { cout << id << ": study()\n"; }
};

int main() {
  Student s("Hanako", 22, 1);
  s.show(); //出力値：Hanako (22)
  s.eat();  //出力値：Hanako: eat()
  s.study();//メンバ関数study()を持つのはStudentだけ
            //出力値：1: study()

  Person p("Taro", 32);
  p.show();//出力値：Taro (32)
  p.eat(); //出力値：Taro: eat()
  //p.study();//エラー（メンバ関数study()はPersonのメンバではない）
}