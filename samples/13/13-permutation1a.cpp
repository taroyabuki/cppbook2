#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  vector<string> cards{ "A", "B", "C", "D", "E" };

  for (auto& p : cards) {
    for (auto& q : cards) {
      for (auto& r : cards) {
        for (auto& s : cards) {
          for (auto& t : cards) {
            if (p != q && p != r && p != s && p != t &&
                          q != r && q != s && q != t &&
                                    r != s && r != t &&
                                              s != t) {
              cout << p << q << r << s << t << endl;
            }
          }
        }
      }
    }
  }
}