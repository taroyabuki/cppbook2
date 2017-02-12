#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
using namespace std;

struct Person {
  string name;
  int age;
  Person() = default;
  Person(const string& newName, int newAge) : name(newName), age(newAge) {}

  //等しいかどうかを調べる演算子
  bool operator==(const Person& p) const {
    return name == p.name && age == p.age;
  }
};

//大小関係を求める演算子
bool operator<(const Person& lhs, const Person& rhs) {
  return lhs.name < rhs.name;
}

//ハッシュの計算
namespace std {
  template<>
  struct hash<Person> {
    size_t operator()(const Person& p) const {
      return hash<string>()(p.name) ^ hash<int>()(p.age);
    }
  };
}

int main() {
  vector<Person> people(5);//デフォルトコンストラクタが5回呼ばれる

  vector<Person> peopleVec;//空のvectorに追加する
  Person taro("Taro", 32);
  peopleVec.push_back(taro);           //コピー
  peopleVec.emplace_back("Hanako", 27);//構築して直接追加
  peopleVec.emplace_back("Masato", 0);

  sort(peopleVec.begin(), peopleVec.end());
  for (auto& p : peopleVec) cout << p.name << ", ";
  cout << endl;//出力値：Hanako, Masato, Taro,

  set<Person> peopleSet;
  peopleSet.emplace("Taro", 32);
  peopleSet.emplace("Hanako", 27);
  peopleSet.emplace("Masato", 0);
  for (auto& p : peopleSet) cout << p.name << ", ";
  cout << endl;//出力値：Hanako, Masato, Taro,

  unordered_set<Person> peopleUSet;
  peopleUSet.emplace("Taro", 32);
  peopleUSet.emplace("Hanako", 27);
  peopleUSet.emplace("Masato", 0);
  for (auto& p : peopleUSet) cout << p.name << ", ";
  cout << endl;//出力例：Taro, Hanako, Masato,
}