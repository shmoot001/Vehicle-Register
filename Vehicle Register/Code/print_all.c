#include "source.h"
void print_all(vehicle_reader *list)
{
  for(int i=0; i<MAX_CAR; i++)
  {
    if(list[i].owner_1.age == '\0')break;
      printf("%d)\n First name: %s\n Last name: %s\n Age: %d\n Type: %s\n Brand:%s\n Number: %s\n", i+1, 
      list[i].owner_1.first_name, 
      list[i].owner_1.last_name,
      list[i].owner_1.age,
      list[i].type, 
      list[i].brand, 
      list[i].car_num);
    }
  }
