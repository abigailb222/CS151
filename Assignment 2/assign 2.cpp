/*
//Name: Abigail Bennett
//Creation: 10/2/2017
//Version: E2 Red
*************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

//Flowchart
//Label     Task                                                          Goto
//01       (start)                                                         02
//02       [double x, y, ang1, ang2, ang3, mag1, mag2, mag3]               03
//03       /print("Enter the first vector: ")/                             04
//04       /input in mag1,ang1/                                            05
//05       /print("Enter the second vector: ")/                            06
//06       /input in mag2,ang2/                                            07
//07       /print("\n")/                                                   08
//08       /print(fixed, setprecision(1))/                                 09
//09       /print("v1:\n")/                                                10
//10       /print("Polar Coordinates: ", "(", mag1, "," ,ang1 ,")\n"/      11
//11       [toPolar(x,y,mag1,ang1)]                                        12
//12       /print("Rectangular Coordinates: ", "(", x, "," ,y ,")\n"/      13
//13       [toRectangular(x,y,mag1,ang1)]                                  14
//14       /print("v2:\n")/                                                15
//15       /print("Polar Coordinates: ", "(", mag2, "," ,ang2 ,")\n"/      16
//16       [toPolar(x,y,mag2,ang2)]                                        17
//17       /print("Rectangular Coordinates: ", "(", x, "," ,y ,")\n"/      18
//18       [toRectangular(x,y,mag2,ang2)]                                  19
//19       [add(mag1,ang1,mag2,ang2,mag3,ang3)]                            20
//20       /print("v1+v2:\n"/                                              21
//21       /print("Polar Coordinates: ", "(", mag3, "," ,ang3 ,")\n"/      22
//22       [toRectangular(x,y,mag3,ang3)]                                  23
//23       /print("Rectangular Coordinates: ", "(", x, "," ,y ,")\n"/      24
//24       [substract(mag1,ang1,mag2,ang2,mag3,ang3)]                      25
//25       /print(v1-v2:\n")/                                              26
//26       /print("Polar Coordinates: ", "(", mag3, "," ,ang3 ,")\n"/      27
//27       [toRectangular(x,y,mag3,ang3)]                                  28
//28       /print("Rectangular Coordinates: ", "(", x, "," ,y ,")\n"/      29
//29       [substract(mag1,ang1,mag2,ang2,mag3,ang3)]                      30
//30       /print(v2-v1:\n")/                                              31
//31       /print("Polar Coordinates: ", "(", mag3, "," ,ang3 ,")\n"/      32
//32       [toRectangular(x,y,mag3,ang3)]                                  33
//33       /print("Rectangular Coordinates: ", "(", x, "," ,y ,")\n"/      34
//34       (exit: 0)

int main()
{
  double x, y, ang1, ang2, ang3, mag1, mag2, mag3;


  cout << "Enter the first vector: ";
  cin >> mag1 >> ang1;
  cout << "Enter the second vector: ";
  cin >> mag2, ang2;
  cout << "\n";

  cout << fixed << setprecision(1);

  cout << "v1:\n";
  cout << "Polar Coordinates: " << "(" << mag1 << "," << ang1 << ")\n";
  toPolar(x, y, mag1, ang1);
  cout << "Rectangular Coordinates: " << "(" << x << "," << y << ")\n";
  toRectangular(x, y, mag1, ang1);

  cout << "v2:\n";
  cout << "Polar Coordinates: " << "(" << mag2 << "," << ang2 << ")\n";
  toPolar(x, y, mag2, ang2);
  cout << "Rectangular Coordinates: " << "(" << x << "," << y << ")\n";
  toRectangular(x, y, mag2, ang2);

  add(mag1, ang1, mag2, ang2, mag3, ang3);
  cout << "v1 + v2:\n";
  cout << "Polar Coordinates: " << "(" << mag3 << "," << ang3 << ")\n";
  toRectangular(x, y, mag3, ang3);
  cout << "Rectangular Coordinates: " << "(" << x << "," << y << ")\n";


  subtract(mag1, ang1, mag2, ang2, mag3, ang3);
  cout << "v1 - v2:\n";
  cout << "Polar Coordinates: " << "(" << mag3 << "," << ang3 << ")\n";
  toRectangular(x, y, mag3, ang3);
  cout << "Rectangular Coordinates: " << "(" << x << "," << y << ")\n";


  subtract(mag1, ang1, mag2, ang2, mag3, ang3);
  cout << "v2 - v1:\n";
  cout << "Polar Coordinates: " << "(" << mag3 << "," << ang3 << ")\n";
  toRectangular(x, y, mag3, ang3);
  cout << "Rectangular Coordinates: " << "(" << x << "," << y << ")\n";

  return 0;
}
