/*
//Name: Abigail Bennett
//Creation: 11/5/2017
//Version: E8 Red
*************************************************/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//Label       Task                                                                                                                      Goto
//01         (start)                                                                                                                     02
//02         [int divider_counter = 0, columns_count = 10]                                                                               03
//03         [string alpha_stringarray, row_divide = \n, col_divide = " "]                                                               04
//04         [for(char c = A, c <= Z, c++)]                                                                                              05
//05         [alpha_stringarray += c]                                                                                                    06
//06         [string alphabet_letters = alpha_stringarray]                                                                               07
//07         [for(int count_i = 0, count_i < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4)), count_i++)]                      08
//08         [for (int count_x = count_i + 1, count_x < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-1)), count_x++)]         09
//09         [for (int count_y = count_x + 1, count_y < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-2)), count_y++)]         10
//10         [if (divider_counter != 0 && divider_counter % columns_count == 0 ) ]                                                       11
//11         /print(row_divide)/                                                                                                         12
//12         /print(alphabet_letters[count_i])/                                                                                          13
//13         /print(alphabet_letters[count_x])/                                                                                          14
//14         /print(alphabet_letters[count_y])/                                                                                          15
//15         [divider_counter++]                                                                                                         16
//16         (exit)
void ComboWithout()
{
 int divider_counter = 0, columns_count = 10 ;

 string alpha_stringarray, row_divide = "\n" , col_divide = "  " ;
 for(char c = 'A'; c <= 'Z'; c++)
 {
   alpha_stringarray += c;

 }
   string alphabet_letters = alpha_stringarray;

   for (int count_i = 0; count_i < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4)); count_i++)
   {
     for (int count_x = count_i + 1; count_x < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-1)); count_x++)
     {
       for (int count_y = count_x + 1; count_y < (sizeof(alphabet_letters) - (sizeof(alphabet_letters)/4-2)); count_y++)
       {

         if (divider_counter != 0 && divider_counter % columns_count == 0 )
         {
           cout << row_divide;

         }

         cout << alphabet_letters[count_i];
         cout << alphabet_letters[count_x];
         cout << alphabet_letters[count_y];
         cout << col_divide;
         divider_counter++;
       }
     }
   }
}
