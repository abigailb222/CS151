/*
//Name: Abigail Bennett
//Creation: 11/5/2017
//Version: E6 Red
*************************************************/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//Label       Task                          Goto
//01         (start:string filename)         02
//02         [ifstream myfilein]             03
//03         [myfilein.open(filename)]      04
//04         [ofstream myfileout]            05
//05         [myfileout.open(poems.txt)]      06
//06         [char a]                        07
//07         [while(myfilein.eof)]           08
//08         [myfilein.get(a)]               09
//09         /print(a)/                      10
//10         [myfileout.close()]             11
//11         (exit)
void copy(string filename)
{

  ifstream myfilein;
  myfilein.open("poems.txt");

  ofstream myfileout;
  myfileout.open(filename);
  string newStr;

  while(getline(myfilein, newStr))
  {
    myfileout<<newStr;
  }
  myfilein.close();
}
