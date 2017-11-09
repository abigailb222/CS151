/*
//Name: Abigail Bennett
//Creation: 10/21/2017
//Version: E3 Red
*************************************************/
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

//Label     Task            Goto
//01       (start)
//02       [float temp]
//03       [temp = x]
//04       [x = y]
//05       [y = temp]
void swap(float& x, float& y)
{
  float temp;
  temp = x;
  x = y;
  y = temp;
}


//Label      Task           Goto
//01        [if (x>y)]       01
//02        [swap(x,y)]      02
//03        [if (x>z)]       03
//04        [swap(x,z)]      04
//05        [if (x>w)]       05
//06        [swap(x,w)]      06
//07        [if (x>v)]       07
//08        [swap(x,v)]      08
//09        [if (y>z)]       09
//10        [swap(y,z)]      10
//11        [if (y>w)]       11
//12        [swap(y,w)]      12
//13        [if (y>v)]       13
//14        [swap(y,v)]      14
//15        [if (z>w)]       15
//16        [swap(z,w)]      16
//17        [if (z>v)]       17
//18        [swap(z,v)]      18
//19        [if (w>v)]       19
//20        [swap(w,v)]      20
//21        (exit: v)
float maximum(float v, float w, float x , float y, float z)
{
  if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }
  return v;
}


//Label      Task           Goto
//01        [if (x>y)]       01
//02        [swap(x,y)]      02
//03        [if (x>z)]       03
//04        [swap(x,z)]      04
//05        [if (x>w)]       05
//06        [swap(x,w)]      06
//07        [if (x>v)]       07
//08        [swap(x,v)]      08
//09        [if (y>z)]       09
//10        [swap(y,z)]      10
//11        [if (y>w)]       11
//12        [swap(y,w)]      12
//13        [if (y>v)]       13
//14        [swap(y,v)]      14
//15        [if (z>w)]       15
//16        [swap(z,w)]      16
//17        [if (z>v)]       17
//18        [swap(z,v)]      18
//19        [if (w>v)]       19
//20        [swap(w,v)]      20
//21        (exit: v)
float minimum(float v, float w, float x , float y, float z)
{
 if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }

 return x;
}


//Label      Task           Goto
//01        [if (x>y)]       01
//02        [swap(x,y)]      02
//03        [if (x>z)]       03
//04        [swap(x,z)]      04
//05        [if (x>w)]       05
//06        [swap(x,w)]      06
//07        [if (x>v)]       07
//08        [swap(x,v)]      08
//09        [if (y>z)]       09
//10        [swap(y,z)]      10
//11        [if (y>w)]       11
//12        [swap(y,w)]      12
//13        [if (y>v)]       13
//14        [swap(y,v)]      14
//15        [if (z>w)]       15
//16        [swap(z,w)]      16
//17        [if (z>v)]       17
//18        [swap(z,v)]      18
//19        [if (w>v)]       19
//20        [swap(w,v)]      20
//21        (exit: v)
float median(float v, float w, float x , float y, float z)
{
  if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }

 return z;
}


//Label      Task           Goto
//01        [if (x>y)]       01
//02        [swap(x,y)]      02
//03        [if (x>z)]       03
//04        [swap(x,z)]      04
//05        [if (x>w)]       05
//06        [swap(x,w)]      06
//07        [if (x>v)]       07
//08        [swap(x,v)]      08
//09        [if (y>z)]       09
//10        [swap(y,z)]      10
//11        [if (y>w)]       11
//12        [swap(y,w)]      12
//13        [if (y>v)]       13
//14        [swap(y,v)]      14
//15        [if (z>w)]       15
//16        [swap(z,w)]      16
//17        [if (z>v)]       17
//18        [swap(z,v)]      18
//19        [if (w>v)]       19
//20        [swap(w,v)]      20
//21        (exit: v)
float firstQuartile(float v, float w, float x , float y, float z)
{
  if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }

 return y;
}


//Label      Task           Goto
//01        [if (x>y)]       01
//02        [swap(x,y)]      02
//03        [if (x>z)]       03
//04        [swap(x,z)]      04
//05        [if (x>w)]       05
//06        [swap(x,w)]      06
//07        [if (x>v)]       07
//08        [swap(x,v)]      08
//09        [if (y>z)]       09
//10        [swap(y,z)]      10
//11        [if (y>w)]       11
//12        [swap(y,w)]      12
//13        [if (y>v)]       13
//14        [swap(y,v)]      14
//15        [if (z>w)]       15
//16        [swap(z,w)]      16
//17        [if (z>v)]       17
//18        [swap(z,v)]      18
//19        [if (w>v)]       19
//20        [swap(w,v)]      20
//21        (exit: v)
float thirdQuartile(float v, float w, float x , float y, float z)
{
 if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }

 return w;
}
