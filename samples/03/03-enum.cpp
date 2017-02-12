#include <iostream>
using namespace std;

int main() {
  //スコープ付き列挙型
  enum class choice1 { ROCK, SCISSORS, PAPER };
  //enum struct choice1 { ROCK, SCISSORS, PAPER };//OK

  choice1 x = choice1::ROCK;//列挙型の使用
  cout << (x == choice1::ROCK ? "グー" : "グー以外") << endl;//出力値：グー

  //int ROCK = 1;//OK（名前の重複はない）

  //スコープ無し列挙型
  enum choice2 { rock, scissors, paper };
  choice2 y = rock;
  cout << y << endl;//出力値：0（rockのこと）

  //int rock = 1;//エラー（名前が重複している）
}