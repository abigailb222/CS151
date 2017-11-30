/*
//Name: Abigail Bennett
//Creation: 10/21/2017
//Version: E4 Red
*************************************************/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#ifndef BASENNOTATION_H
#define BASENNOTATION_H
using namespace std;

//Label    Task                             Goto
//01      (start: base, value)               02
//02      <if(value > 0)>                    03
//03      /NumberGenerator(value, base)/     04
//04      print(value % base)/               05
//05      (exit)


void NumberGenerator(int value, int base)
{
  if(value > 1)
  {
    NumberGenerator((value/ base), base);
  }
  cout << (value % base);
}

//Label    Task                             Goto
//01      (start: base, value)               02
//02      <if((base >= 2 && (base <= 9))>    03
//03      /NumberGenerator(value, base)/     04
//04      (exit)


void BaseConvert(int value, int base)
{
  if ((base >= 2) && (base <= 9))
  {
    NumberGenerator(value, base);
  }
}

#endif //BASENNOTATION_H
