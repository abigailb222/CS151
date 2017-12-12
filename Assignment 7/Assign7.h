/*
//Name: Abigail Bennett
//Creation: 11/5/2017
//Version: E7 Red
*************************************************/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


//Label     Task                                                  Goto
//01       (start:int data[], int size)                            02
//02       /print("[")/                                            03
//03       [for(int i=0; i < size; i++]                            04
//04       /print(data[i] ",")/                                    05
//05       /print("]" " ")/                                        06
//06       (exit)

void PrintArray(int data[],int size)
{
  cout << "[" ;
  for(int i=0 ; i < size; i++)
  {
    cout << data[i] << "," ;

  }
  cout  << "]" << " ";
}

//Label      Task                                                  Goto
//01        (start:int max,int min,int size,int data[])             02
//02        [int new_max, new_min]                                  03
//03        [if(max > min)]                                         04
//04        [new_max = max]                                         05
//05        [new_min = min]                                         06
//06        [else]                                                  07
//07        [new_max = min]                                         08
//08        [new_min = max]                                         09
//09        [srand(time(0))]                                        10
//10        [for(int i=0, i < size, i += 1)]                        11
//11        [data[i] = rand()% (new_max-new_min+1) + new_min]       12
//12        (exit)
bool RandomNumber(int max, int min, int size, int data[])
{
  int new_max, new_min;
  if(max > min)
  {
    new_max = max;
    new_min = min;
  }
  else
  {
    new_max = min;
    new_min = max;
  }

  srand(time(0));
  for(int i = 0; i < size; i += 1)
  {
    data[i] = rand()  % (new_max-new_min+1) + new_min;

  }
}


//Label     Task                                                          Goto
//01        (start:int data[], int size)                                   02
//02        [int temp, count_i, count_u]                                   03
//03        [for(count_i = 0, count_i < size, count_i++)]                  04
//04        [for(count_u = count_i+1, count_u < size, count_u++)]          05
//05        [if(data[count_i] < data[count_u]]                             06
//06        [temp = data[count_i] < data[count_u]]                         07
//07        [data[count_i] = data[count_u]]                                08
//08        [data[count_u] = temp]                                         09
//09        (exit)
void sort(int data[] , int size)
{
  int temp, count_i ,count_u;
  for(count_i = 0; count_i < size; count_i++)
	{
		for(count_u = count_i+1; count_u < size; count_u++)
		{
			if(data[count_i] < data[count_u])
			{
				temp = data[count_i];
				data[count_i] = data[count_u];
				data[count_u] = temp;

			}

		}

	}
}
