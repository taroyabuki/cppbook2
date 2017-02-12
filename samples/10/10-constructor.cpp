#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;

  Person() {}//書かないと定義されない

  Person(const string& newName, int newAge) : name(newName), age(newAge) {}
};

int main() {
  Person people[5];//デフォルトコンストラクタが必要
  cout << end(people) - begin(people) << endl;//出力値：5

  Person taro("Taro", 32);//コンストラクタの利用
  cout << taro.name << " (" << taro.age << ")\n";//出力値：Taro (32)
}