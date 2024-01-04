#include "source.h"

void file_writer(vehicle_reader *list)
{
  FILE * f = fopen("register.txt", "w"); 
  
 
  for(int i=0; i<MAX_CAR; i++)
  {
    if(list[i].owner_1.age == 0)
      {
        break;
      }
        
      fprintf(f,"%s %s %d %s %s %s\n",list[i].owner_1.first_name,list[i].owner_1.last_name,list[i].owner_1.age,list[i].type,list[i].brand,list[i].car_num);
    }
    fclose(f);
}