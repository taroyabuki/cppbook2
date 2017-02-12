#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream outfile("test.txt", ios_base::app);//追記モードでファイルを開く
  outfile << "追記\n";
}