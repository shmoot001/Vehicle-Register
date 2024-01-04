#include "source.h"

int file_reader(vehicle_reader *list){
  int read;
  int choice; 
  int i= 0;
  FILE * f = fopen("register.txt", "r");
  if(!f)
    {
      f = fopen("register.txt","w"); 
    }
  
  do
  {
    { read = fscanf
      (f,"%s %s %d %s %s %s", list[i].owner_1.first_name, list[i].owner_1.last_name, &list[i].owner_1.age, list[i].type, list[i].brand,list[i].car_num);
      i++;
    }
  } while (read !=EOF);
  fclose(f);
  size = i;
  return i;
} 