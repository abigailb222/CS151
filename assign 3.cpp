//Label    Task                                                          Goto
//01      (start)                                                         02
//02      [float v,w,x,y,z]                                               03
//03     /print("Enter five numbers:")/                                   04
//04     /input in v,w,x,y,z/                                             05
//05     /print(endl)/                                                    06
//06     /print(fixed,setprecision(1))/                                   07
//07     /print("The maximum is:" maximum(v,w,x,y,z))/                    08
//08     /print("The third Quartile is:" thirdQuartile(v,w,x,y,z))/       09
//09     /print("The median is:" median(v,w,x,y,z))/                      10
//10     /print("The first Quartile is:" firstQuartile(v,w,x,y,z))/       11
//11     /print("The minimum is:" minimum(v,w,x,y,z))/                    12
//12     (exit: 0)

int main()
{
  float v,w,x,y,z;

  cout << "Enter five numbers: ";
  cin >> v >> w >> x >> y >> z;
  cout << endl;
  cout << fixed << setprecision(1);
  cout << "The maximum is: " << maximum(v,w,x,y,z) << "\n";
  cout << "The third Quartile is: " << thirdQuartile(v,w,x,y,z) << "\n";
  cout << "The median is: " << median(v,w,x,y,z) << "\n";
  cout << "The first Quartile is: " << firstQuartile(v,w,x,y,z) << "\n";
  cout << "The minimum is: " << minimum(v,w,x,y,z);
  return 0;
}
