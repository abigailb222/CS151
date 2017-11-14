/*
Name: Abigail Bennett
Version: Midterm project
Date:
Description:
*******************************/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

//Label   Task                                                                  Goto
//01      (start)                                                               02
//02      /print("Applebees Two for Twenty\n")/                                03
//03      /print("Two Entrees + One Appetizer\n\n")/                            04
//04      /print("Appetizers:\n")/                                              05
//05      /print("1:Two Caesar Side Salads (800 Cal.)\n")/                      06
//06      /print("2:Spinach + Artichoke Dip(960 Cal.)\n")/                      07
//07      /print("3:Crunchy Onion Rings(1300 Cal.)\n")/                         08
//08      /print("4:Boneless Wings(1160 Cal.)\n")/                              09
//09      /print("5:Mozzarella Sticks(910 Cal.)\n")/                            10
//10      /print("What would you like? Please choose by number:\n")/            11
//11      (exit)
string Appetizer()
{
  cout << "Appetizers\n";
  cout << "1. Two Caesar Side Salads (800 Cal.)\n";
  cout << "2. Spinach + Artichoke Dip (960 Cal.)\n";
  cout << "3. Crunchy Onion Rings (1300 Cal.)\n";
  cout << "4. Boneless Wings (1160 Cal.)\n";
  cout << "5. Mozzarella Sticks (910 Cal.)\n";

  int Appetizer;
  cout << "Choose an Appetizer: ";
  cin >> Appetizer;
  cout << "\n";

  string chose;
  if (Appetizer == 1)
  {
   chose =  "Two Caesar Side Salads (800 Cal.)";

  }
 else if (Appetizer == 2)
 {
  chose = "Spinach + Artichoke Dip (960 Cal.)";

  }
  else if (Appetizer == 3)
  {
    chose = "Crunchy Onion Rings (1300 Cal.)";
  }
  else if (Appetizer == 4)
  {
    chose ="Boneless Wings (1160 Cal.)";

  }
  else if (Appetizer == 5)
  {
  chose = "Mozzarella Sticks (910 Cal.)";

  }
  else
  {
   chose = "Two Caesar Side Salads (800 Cal.)";

  }

  string free;
  free = chose;
  return free;
}

string app1 = Appetizer();


//Label   Task                                                                    Goto
//01      (start)                                                                 02
//02      /print("Entrees:\n")/                                                   03
//03      /print("1:Chicken Tenders Basket(1150 Cal.)\n")/                        04
//04      /print("2:Oriental Chicken Salad(1420 Cal.)\n")/                        05
//05      /print("3:Firecracker Shrimp Cavatappi(1970 Cal.)[+3.50]\n")/           06
//06      /print("4:The American Standard(1010 Cal.)\n")/                         07
//07      /print("5:Blackened Tilapia(510 Cal.)\n")/                              08
//08      /print("6:Whisky Bacon Burger(1240 Cal.)\n")/                           09
//09      /print("7:Double-Glazed Baby Back Ribs-Half Rack(550 Cal.)[+3.50]\n")/  10
//10      /print("8:Cedar Grilled Lemon Chicken(580 Cal.)\n")/                    11
//11      /print("9:Fiesta Lime Chicken(1140 Cal.)\n")/                           12
//12      /print("10:Three-Cheese Chicken Cavatappi(1280 Cal.)\n")/               13
//13      /print("What would you like? Please choose two items by number:\n")/    14
//14      (exit)
string Entrees()
{
  float Entre1, Entre2;

  cout << "Entre\n";
  cout << "1. Chicken Tenders Basket (1150 Cal.)\n";
  cout << "2. Oriental Chicken Salad (1420 Cal.)\n";
  cout << "3. Firecracker Shrimp Cavatappi (1970 Cal.) [Plus 3.50]\n";
  cout << "4. The American Standard (1010 Cal.)\n";
  cout << "5. Blackened Tilapia (510 Cal.)\n";
  cout << "6. Whisky Bacon Burger (1240 Cal.)\n";
  cout << "7. Double-Glazed Baby Back Ribs - Half Rack (550 Cal.) [Plus 3.50]\n";
  cout << "8. Cedar Grilled Lemon Chicken (580 Cal.)\n";
  cout << "9. Fiesta Lime Chicken (1140 Cal.)\n";
  cout << "10. Three-Cheese Chicken Cavatappi (1280 Cal.)\n";


  cout << "Choose an Entre: ";
  cin >> Entre1;
  cout << "\n";

  string chose;
  if (Entre1 == 1){
    chose = "Chicken Tenders Basket (1150 Cal.)";
  }
 else if (Entre1 == 2){
    chose = "Oriental Chicken Salad (1420 Cal.)";

  }
  else if (Entre1 == 3){
    chose = "Firecracker Shrimp Cavatappi (1970 Cal.) [Plus 3.50]";
  }
  else if (Entre1 == 4){
    chose = "The American Standard (1010 Cal.)";

  }
  else if (Entre1 == 5){
    chose = "Blackened Tilapia (510 Cal.)";

  }
  else if (Entre1 == 6){
    chose = "Whisky Bacon Burger (1240 Cal.)";

  }
  else if (Entre1 == 7){
    chose = "Double-Glazed Baby Back Ribs - Half Rack (550 Cal.) [Plus 3.50]";

  }
  else if (Entre1 == 8){
    chose = "Cedar Grilled Lemon Chicken (580 Cal.)";

  }
  else if (Entre1 == 9){
    chose = "Fiesta Lime Chicken (1140 Cal.)";

  }
  else if (Entre1 == 10){
    chose = "Three-Cheese Chicken Cavatappi (1280 Cal.)";

  }
  else {
    chose ="Chicken Tenders Basket (1150 Cal.)";

  }


  string free;
  free = chose;
  return free;
}


string ent1 = Entrees();


//Label   Task                                                                    Goto
//01      (start)                                                                 02
//02      /print("Entrees:\n")/                                                   03
//03      /print("1:Chicken Tenders Basket(1150 Cal.)\n")/                        04
//04      /print("2:Oriental Chicken Salad(1420 Cal.)\n")/                        05
//05      /print("3:Firecracker Shrimp Cavatappi(1970 Cal.)[+3.50]\n")/           06
//06      /print("4:The American Standard(1010 Cal.)\n")/                         07
//07      /print("5:Blackened Tilapia(510 Cal.)\n")/                              08
//08      /print("6:Whisky Bacon Burger(1240 Cal.)\n")/                           09
//09      /print("7:Double-Glazed Baby Back Ribs-Half Rack(550 Cal.)[+3.50]\n")/  10
//10      /print("8:Cedar Grilled Lemon Chicken(580 Cal.)\n")/                    11
//11      /print("9:Fiesta Lime Chicken(1140 Cal.)\n")/                           12
//12      /print("10:Three-Cheese Chicken Cavatappi(1280 Cal.)\n")/               13
//13      /print("What would you like? Please choose two items by number:\n")/    14
//14      (exit)
string Entrees2()
{
  float Entre2;
  cout << "Choose another Entre: ";
  cin >> Entre2;
  cout << "\n";

  string chose;
  if (Entre2 == 1){
    chose = "Chicken Tenders Basket (1150 Cal.)";
  }
 else if (Entre2 == 2){
    chose = "Oriental Chicken Salad (1420 Cal.)";

  }
  else if (Entre2 == 3){
    chose = "Firecracker Shrimp Cavatappi (1970 Cal.) [Plus 3.50]";
  }
  else if (Entre2 == 4){
    chose = "The American Standard (1010 Cal.)";

  }
  else if (Entre2 == 5){
    chose = "Blackened Tilapia (510 Cal.)";

  }
  else if (Entre2 == 6){
    chose = "Whisky Bacon Burger (1240 Cal.)";

  }
  else if (Entre2 == 7){
    chose = "Double-Glazed Baby Back Ribs - Half Rack (550 Cal.) [Plus 3.50]";

  }
  else if (Entre2 == 8){
    chose = "Cedar Grilled Lemon Chicken (580 Cal.)";

  }
  else if (Entre2 == 9){
    chose = "Fiesta Lime Chicken (1140 Cal.)";

  }
  else if (Entre2 == 10){
    chose = "Three-Cheese Chicken Cavatappi (1280 Cal.)";

  }
  else {
    chose ="Chicken Tenders Basket (1150 Cal.)";

  }


  string free;
  free = chose;
  return free;
}


string ent2 = Entrees();



void appApplebees()
{
  fstream logfile;
  logfile.open("abigail.txt", fstream::out);
  float subtotal, Tax, Total, fifteen, eighteen, twenty;

  cout << ".......Receipt.......\n";
  cout << "\n";
  cout << app1;
  cout << "\n";
  cout << ent1;
  cout << "\n";
  cout << ent2;
  cout << "\n";



 if (ent1 == "Firecracker Shrimp Cavatappi (1970 Cal.)")
 {
   if(ent2 == "Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)")
   {
     subtotal += 5.00;}
     else
     {
       subtotal += 3.50;

     }

 }

 else if(ent1 == "Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)" )
 {
   if(ent2 == "Firecracker Shrimp Cavatappi (1970 Cal.)")
   {
     subtotal += 5.00;

   }
   else
   {
     subtotal += 3.50;

   }

 }

 else if ((ent1 == "Double-Glazed Baby Back Ribs - Half Rack (550 Cal.)")||(ent2 == "Firecracker Shrimp Cavatappi (1970 Cal.)") )
 {
   subtotal += 3.50;

 }
 subtotal = 20.00;
 Tax =  8.87 + subtotal;
 Total = subtotal + Tax;
 fifteen = subtotal* 0.15;
 eighteen = subtotal* 0.18;
 twenty = subtotal* 0.20;

 cout <<"\n";
 cout <<"...........Total.................\n";
 cout << "\n";
 cout << "Subtotal: ";
 cout << subtotal;
 cout <<"\n";
 cout << "Tax: ";
 cout << Tax;
 cout << "\n";
 cout << "Total: ";
 cout << Total;
 cout <<"\n";
 cout << "\nGratuity:"<<"\n"<<" 15 | 18 |  20 " ;
 cout <<"\n";
 cout << fifteen << "|" << eighteen << "|" << twenty;

}
