#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Person {
  string name;
  int age;
};

int main() {
  //自動メモリにPersonオブジェクトを構築
  Person taro;
  taro.name = "Taro";
  taro.age = 32;
  cout << taro.name << " (" << taro.age << ")\n";//出力値：Taro (32)

  //メンバ単位の初期化
  Person masato { "Masato", 0 };
  cout << masato.name << " (" << masato.age << ")\n";//出力値：Masato (0)

  //メンバ単位の初期化
  Person jiro {};
  cout << jiro.name << " (" << jiro.age << ")\n";//出力値： (0)

  //フリーストアにオブジェクトを構築
  Person* pHanako = new Person {"Hanako", 27};
  cout << pHanako->name << " (" << pHanako->age << ")\n";//出力値：Hanako (27)
  delete pHanako;

  //Personの配列
  Person people[5];
  people[0].name = "Masato";
  people[0].age = 0;
  cout << people[0].name << " (" << people[0].age << ")\n";//出力値：Masato (0)

  //Personのvector
  vector<Person> vec;
  vec.emplace_back();//要素の追加（6.1.3項）
  vec[0].name = "Hanako";
  vec[0].age = 27;
  cout << vec[0].name << " (" << vec[0].age << ")\n";//出力値：Hanako (27)
}