#include <iostream>
#include <limits>
using namespace std;

int main() {
  cout <<
    numeric_limits<int>::lowest() << ", " <<
    numeric_limits<int>::max() << endl;
  //出力値：-2147483648, 2147483647
}