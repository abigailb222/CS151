/*
//Name: Abigail Bennett
//Creation: 09/20/2017
//Version: Green
*************************************************/
#include <iostream>
#include <string>
using namespace std;

  int main()
  {
    string adjective;
    string noun;
    string animal;
    string noise;
    //getting data
   cout<< "Enter an adjective: ";
   cin >> adjective;
   cout<<"Enter a noun: ";
   cin >> noun;
   cout<< "Enter an animal: ";
   cin >> animal;
   cout<< "Enter a noise: ";
   cin >> noise;
   //output
   cout<< "\n";//cout<<endl;
   cout<<adjective + " Macdonald had a(n) " + noun + " E-I-E-O" <<endl;
   cout<<"and on that " + noun + " he had a(n) " + animal + ", E-I-E-O" <<endl;
   cout<<"with a(n) " + noise + " " + noise + " here" <<endl;
   cout<<"and a(n) " + noise + " " + noise + " there," <<endl;
   cout<<"here a(n) " + noise + ", there a(n) " + noise + "," <<endl;
   cout<<"everywhere a(n) " + noise + " " + noise + "," <<endl;
   cout<<adjective + " Macdonald had a(n) " + noun + ", E-I-E-O." <<endl;
   return 0;
  }

  //Flowchart:
  //Label     Task                                                                 Goto
  //01       (start)                                                                02
  //02      [adjective=string]                                                      03
  //03      [noun=string]                                                           04
  //04      [animal=string]                                                         05
  //05      [noise=string]                                                          06
  //06      /print("enter an adjective: ")                                          07
  //07      /input in adjective/                                                    08
  //08      /print("enter a noun: ")                                                09
  //09      /input in noun/                                                         10
  //10      /print("enter an animal: ")                                             11
  //11      /input in animal/                                                       12
  //12      /print("enter a noise: ")                                               13
  //13      /input in noise/                                                        14
  //14      /print(adjective + " Macdonald had a(n) " + noun + " E-I-E-O")/         15
  //15      /print("and on that " + noun + " he had a(n) " + animal + ", E-I-E-O")  16
  //16      /print("with a(n) " + noise + " " + noise + " here")                    17
  //17      /print("and a(n) " + noise + " " + noise + " there,")                   18
  //18      /print("here a(n) " + noise + ", there a(n) " + noise + ",")            19
  //19      /print("everywhere a(n) " + noise + " " + noise + ",")                  20
  //20      /print(adjective + " Macdonald had a(n) " + noun + ", E-I-E-O.")        21
  //21      (exit)
