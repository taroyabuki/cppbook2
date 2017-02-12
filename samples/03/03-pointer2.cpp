#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int* pA = &a;         //aへのポインタ
  int** ppA = &pA;      //pAへのポインタ
  cout << **ppA << endl;//出力値：10
}