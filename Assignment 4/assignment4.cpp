//Label      Task                                            Goto
//01        (start)                                           02
//02        /int bases1,bases2,bases3/                        03
//03        /srand((unsigned)time(0))/                        04
//04        /int RandNum1 = (rand() % 100)/                   05
//05        /int RandNum2 = (rand() % 100)/                   06
//06        /print(Enter three bases)/                        07
//07        /input(bases1,bases2,bases3)/                     08
//08        /print(endl)/                                     09
//09        /print(RandNum1 " in base" bases1 " is:" )/       10
//10        /NumberGenerator(RandNum1,bases1)/                11
//11        /print(endl)/                                     12
//12        /print(RandNum1 " in base" bases2 " is:" )/       13
//13        /NumberGenerator(RandNum1,bases2)/                14
//14        /print(endl)/                                     15
//15        /print(RandNum1 " in base" bases3 "i s:" )/       16
//16        /NumberGenerator(RandNum1,bases3)/                17
//17        /print(endl)/                                     18
//18        /print("\n")/                                     19
//19        /print(RandNum1 " in base" bases1 " is:" )/       20
//20        /BaseConvert(RandNum2,bases1)/                    21
//21        /print(endl)/                                     22
//22        /print(RandNum1 " in base" bases2 " is:" )/       23
//23        /BaseConvert(RandNum2,bases2)/                    24
//24        /print(endl)/                                     25
//25        /print(RandNum1 " in base" bases3 " is:" )/       26
//26        /BaseConvert(RandNum2,bases3)/                    27
//27        (exit)

#include assign4.h

int main()
{
  int bases1, bases2, bases3;

  srand((unsigned)time(0));
  int RandNum1 = (rand() % 99 +1);
  int RandNum2 = (rand() % 100);

  cout << "Enter three bases: ";
  cin >> bases1>>bases2>>bases3;
  cout << endl;

  cout << RandNum1 << " in base " <<bases1<< " is: " ;
  BaseConvert(RandNum1, bases1);
  cout << endl;
  cout << RandNum1 << " in base " <<bases2<< " is: ";
  BaseConvert(RandNum1, bases2);
  cout << endl;
  cout << RandNum1 << " in base " << bases3<< " is: ";
  BaseConvert(RandNum1, bases3);
  cout << endl;

  cout << "\n";
  cout << RandNum2 << " in base " << bases1<< " is: ";
  BaseConvert(RandNum2,bases1);
  cout << endl;
  cout << RandNum2 << " in base " << bases2<< " is: ";
  BaseConvert(RandNum2,bases2);
  cout << endl;
  cout << RandNum2 << " in base " << bases3 << " is: ";
  BaseConvert(RandNum2,bases3);

  return 0;
}
