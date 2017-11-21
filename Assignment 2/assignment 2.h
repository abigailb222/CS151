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
//Label     Task                                                                                                     Goto
//01       (start)                                                                                                    02
//02       [double pi()]                                                                                              03
//03       [return 3.141592653]                                                                                       04
//04       [double toRadian(double degrees)]                                                                          05
//05       [float answer = degrees*(pi()/180)]                                                                        06
//06       [return answer]                                                                                            07
//07       [double toDegrees(double radian)]                                                                          08
//08       [double answer = radian*(180/pi())]                                                                        09
//09       [return answer]                                                                                            10
//10       [void toRectangular(double magnitude, double angle, double& x, double& y)]                                 11
//11       [angle = toRadian(angle)]                                                                                  12
//12       [x = magnitude*cos(angle)]                                                                                 13
//13       [y = magnitude*sin(angle)]                                                                                 14
//14       [void toPolar(double& magnitude, double& angle, double x, double y)]                                       15
//15       [magnitude = sqrt((x*x)+(y*y))]                                                                            16
//16       [angle = toDegrees(atan2(y,x))]                                                                            17
//17       [double add(double mag1, double ang1, double mag2, double ang2, double& mag3, double& ang3)]               18
//18       [double x1,y1,x2,y2]                                                                                       19
//19       [toRectangular(mag1,ang1,x1,y1)]                                                                           20
//20       [toRectangular(mag2,ang2,x2,y2)]                                                                           21
//21       [mag3 = x1+y1]                                                                                             22
//22       [mag3 = x2+y2]                                                                                             23
//23       [toPolar(mag3,ang3,mag3,ang3)]                                                                             24
//24       [return 0]                                                                                                 25
//25       [double substract(double mag2, double ang2, double mag1, double ang1, double& mag3, double& ang3)]         26
//26       [double x1,x2,y1,y2)]                                                                                      27
//27       [toRectangular(mag1,ang1,x1,y1)]                                                                           28
//28       [toRectangular(mag2,ang2,x2,y2)]                                                                           29
//29       [mag3 = x2-x1]                                                                                             30
//30       [mag3 = y2-y1]                                                                                             31
//31       [toPolar(mag3,ang3,mag3,ang3)]                                                                             32
//32       [return 0]                                                                                                 33
//33       (exit: 0)

double pi()
{
  return 3.141592653;
}

double toRadian(double degrees)
{
  float answer = degrees*(pi()/180);
  return answer;
}

double toDegrees(double radian)
{
  double answer = radian*(180/pi());
  return answer;
}

void toRectangular(double magnitude, double angle, double& x, double& y)
{
  angle = toRadian(angle);
  x = magnitude*cos(angle);
  y = magnitude*sin(angle);
}

void toPolar(double& magnitude, double& angle, double x, double y)
{
  magnitude = sqrt((x*x) + (y*y));
  angle = toDegrees(atan2(y,x));
}

double add(double mag1, double ang1, double mag2, double ang2, double& mag3, double& ang3)
{
  double x1, y1, x2, y2;
  toRectangular(mag1, ang1, x1, y1);
  toRectangular(mag2, ang2, x2, y2);
  mag3 = x1 + y1;
  ang3 = x2 + y2;
  toPolar(mag3, ang3, mag3, ang3);
  return 0;
}

double subtract(double mag2, double ang2, double mag1, double ang1, double& mag3, double& ang3)
{
  double x1, x2, y1, y2;
  toRectangular(mag1, ang1, x1, y1);
  toRectangular(mag2, ang2, x2, y2);
  mag3 = x2 - x1;
  ang3 = y2 - y1;
  toPolar(mag3, ang3, mag3, ang3);
  return 0;
}
