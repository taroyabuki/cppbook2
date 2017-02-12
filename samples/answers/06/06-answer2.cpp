#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

using person = pair<string, int>;

namespace std {
  template<>
  struct hash<person> {
    size_t operator()(const person& p) const {
      size_t h1 = hash<string>()(p.first);
      size_t h2 = hash<int>()(p.second);
      return  h1 ^ h2;
    }
  };
}

int main() {
  unordered_map<person, int> people;
  auto taro = make_pair("Taro", 32);
  people[taro] = 100;

  cout << people[taro] << endl;
}