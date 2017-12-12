/Label      Task                                                          Goto
//01         (start)                                                        02
//02         [int v[10], number1,number2]                                   03
//03         /print(Enter two distict numbers)/                             04
//04         /input(number1,number2)/                                       05
//05         [RandomNumber(number1,number2,10,v)]                           06
//06         /print(\n*******Random Numbers*******)/                        07
//07         [PrintArray(v,10)]                                             08
//08         [sort(v,10)]                                                   09
//09         /print(\n********Decending Sorted Numbers*********)/           10
//10         [PrintArray(v,10)]                                             11
//11         (exit)
#include <Assign7.h>

int main()
{
  int v[10], number1 ,number2;
  cout<< "Enter Two distict numbers: ";
  cin >> number1 >> number2;
  RandomNumber(number1, number2, 10, v);
  cout << "\n***********Random Numbers***********" << endl;
  PrintArray(v,10);
  sort(v,10);
  cout << "\n***********Decending Sorted Numbers***********" << endl;
  PrintArray(v,10);

  return 0;
}
