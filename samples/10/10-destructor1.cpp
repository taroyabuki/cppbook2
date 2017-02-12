#include <iostream>
#include <string>
#include <memory>
using namespace std;

struct Person {
  string name;
  Person(const string& newName) : name(newName) {}
  ~Person() {
    cout << name << "は解体された\n";
  }
};

int main() {
  Person a1("Taro");                      //自動メモリに構築
  Person* pA2 = new Person("Jiro");       //フリーストアに構築
  Person* pA3 = new Person("Saburo");     //フリーストアに構築
  auto pA4 = make_shared<Person>("Shiro");//フリーストアに構築

  cout << a1.name << endl;  //出力値：Taro
  cout << pA2->name << endl;//出力値：Jiro
  cout << pA3->name << endl;//出力値：Saburo
  cout << pA4->name << endl;//出力値：Shiro

  delete pA2;//オブジェクトの解体
  //delete pA3;を忘れている。
}