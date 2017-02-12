#include <iostream>
#include <string>
using namespace std;

struct Person {
  string name;
  int age;
};

int main() {
  Person taro { "Taro", 32 };

  Person A(taro);
  //Person A = taro;//OK
  cout << A.name << " (" << A.age << ")\n";//出力値：Taro (32)

  taro.name = "Jiro";
  cout << A.name << " (" << A.age << ")\n";//出力値：Taro (32)
}