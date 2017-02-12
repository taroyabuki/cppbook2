#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
  Person(const string& newName, int newAge) : name(newName), age(newAge) {}
};

bool operator<(const Person& p1, const Person& p2) {
  return p1.age < p2.age;
}

int main() {
  vector<Person> people;
  people.emplace_back("Taro", 32);
  people.emplace_back("Hanako", 27);
  people.emplace_back("Masato", 0);

  sort(people.begin(), people.end());
  for (auto p : people) {
    cout << p.name << " (" << p.age << ")\n";
  }
}