#include "source.h"

void cleaner(vehicle_reader *list, int size)
{ 
  printf("Entry the line you want to clean\n");
  
  size = sakerinmatning();
  
  if (size<=0 || size > MAX_CAR)
      {
        printf("doesnt exist\n");
        exit(2);
      }
  
  size--;
  
  if(list[size].owner_1.age == 0)
    {
        printf("line doesnt exist\n");
    }
  else 
    {
      for(int i = size; i<10; i++)
        {
          list[i] = list[i+1];
        }
      printf("line %d doesnt exist anymore\n", size+1);
    }
}