//#pragma once//だけでもOK

#ifndef NUMBER_H//NUMBER_Hが定義されていないなら#endifまでを有効にする
#define NUMBER_H//NUMBER_Hを定義する

int numOfDivisors(int n);
int fibonacci(int n);
int factorial(int n);

#endif//#ifndef NUMBER_Hの影響はここまで