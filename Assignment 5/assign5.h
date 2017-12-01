/*
//Name: Abigail Bennett
//Creation: 11/1/2017
//Version: E5 Red
*************************************************/
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#ifndef GuessNumber_H
#define GuessNumber_H
using namespace std;

//Label      Task                                     Goto
//01        (start: min,max,limit,log[])               02
//02        [int number,i = 0,count,domain]            03
//03        [domain = max - min + 1]                   04
//04        [srand(time(0))]                           05
//05        [int ran = rand()%domain + min]            06
//06        [while(number != ran && limit > 0)]        07
//07        /print(Guess my number:)/                  08
//08        /input(number)/                            09
//09        [if(number == ran)]                        10
//10        /print(You got it!)/                       11
//11        [if(number != ran && limit > 0)]           12
//12        /print(Incorrect.)/                        13
//13        [log[i] = number]                          14
//14        [i++]                                      15
//15        [limit--]                                  16
//16        [if(number != ran && limit == 0)]          17
//17        /print(You are out of guesses)/            18
//18        /print(The number is:)/                    19
//19        [count = 0]                                20
//20        /print(\n[)/                               21
//21        [while(count < i)]                         22
//22        /print(log[count])/                        23
//23        [if(count < i - 1)]                        24
//24        /print(,)/                                 25
//25        [if(count == i - 1)]                       26
//26        /print(])/                                 27
//27        [count++]                                  28
//28        (exit)


void GuessNumber(int min, int max, int limit, int log[])
{
  int number,i = 0, count, domain;
  domain = max - min + 1;

  srand(time(0));
  int ran = rand() % domain + min;

  while (number != ran && limit > 0)
  {
    cout << "Guess my number: ";
    cin >> number;
    if (number == ran)
    {
      cout << "You got it!";
    }
    if (number != ran && limit > 0)
    {
      cout << "Incorrect."<<endl;
    }
    log[i] = number;
    i++;
    limit--;
  }
  if (number != ran && limit == 0)
  {
    cout << "You are out of guesses"<<endl;
    cout << "The number is: "<<ran;
  }
  count = 0;
  cout << "\n[";
  while (count < i)
  {
    cout << log[count];
    if (count < i - 1)
    {
      cout << ",";
    }
    if (count == i - 1)
    {
      cout << "]";
    }
    count++;
  }
}

#endif //GuessNumber_H
