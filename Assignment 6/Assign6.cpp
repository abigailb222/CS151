//Label     Task                Goto
//01       (start)               02
//02       [string filename]     03
//03       /print(Filename:)     04
//04       /input(filename)      05
//05       (exit)
int main()
{
  string filename;

  cout << "Filename: ";
  cin >> filename;



  copy(filename);

  return 0;
}
