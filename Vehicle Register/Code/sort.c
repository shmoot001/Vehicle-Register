#include "source.h"

void sort(vehicle_reader *list)
{ int size;
  for(int j = 0; j<size; j++)
  {
    for(int i = 0; i<(size-j-1); i++)
    {
      if (list[i].owner_1.age == 0 || list[i+1].owner_1.age == 0)
      break;
      else if(strcmp(list[i].brand, list[i+1].brand) > 0)
      {
        vehicle_reader tmp;
        tmp = list[i];
        list[i] = list[i+1];
        list[i+1] = tmp;
        printf ("mission complete\n");
      }
    }
  }
}