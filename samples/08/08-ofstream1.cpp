#include <iostream>
#include <fstream>//ofstreamのために必要
using namespace std;

int main() {
  ofstream outfile("test.txt", ios_base::out);
  //ofstream outfile("test.txt");//OK
  outfile << "文字列を\n";
  outfile << "ファイルに書き込む" << endl;
  outfile.close();//ファイルを閉じる（ここでは不要）
}