/*
//Name: Abigail Bennett
//Creation: 11/1/2017
//Version: E5 Red
*************************************************/

//Label      Task                                Goto
//01        (start)                               02
//02        [int a,b,min,max,limit,log[100]]      03
//03        /print(Enter two Number:)/            04
//04        /input(a,b)/                          05
//05        /print(endl)/                         06
//06        [if(a > b)]                           07
//07        [max = a]                             08
//08        [min = b]                             09
//09        [else>                                10
//10        [max = b]                             11
//11        [min = a]                             12
//12        /print(Enter your limit:)/            13
//13        /input(limit)/                        14
//14        /print(endl)/                         15
//15        [GuessNumber(min,max,limit,log)]      16
//16        (exit)

#include assign 5
int main()
{
  int a,b, min, max, limit, log[100];

  cout << "Enter Two Number: ";
  cin >>a>>b;
  cout <<endl;

  if (a > b)
  {
    max = a;
    min = b;
  }
  else
  {
    max = b;
    min = a;
  }

  cout << "Enter your limit: ";
  cin >>limit;
  cout <<endl;

  GuessNumber(min, max, limit, log);

  return 0;
}
