#include <iostream>
using namespace std;

int main() {
  try {
    while (1) {//無限ループ
      int* p = new int[0x1fffffff];//大きな配列の確保
      cout << p << endl;
    }
  }
  catch (bad_alloc& e) {
    cerr << e.what() << endl;//出力例：bad allocation
  }
}