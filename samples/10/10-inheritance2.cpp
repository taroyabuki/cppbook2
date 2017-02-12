#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
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
  void study() { cout << name << " (id:" << id << "): study()\n"; }
};

int main() {
  Student s("Hanako", 22, 1);
  s.study();//出力値：Hanako (id:1): study()（変更された）
}