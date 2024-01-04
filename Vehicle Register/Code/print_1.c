#include "source.h"

void print_1(vehicle_reader *list, int size)
{ int i = 0;
  printf("entry the line to print out: ");
  size = sakerinmatning();
    
    if (size<= 0 || size>10)
    {
      printf("doesnt exist\n");
      exit(0);
    }
  
  size--;
    do 
    {
      if (i != size)
        {
          i++;
        }
      
      if(i == size)
      {
        printf("%d)\n First name: %s\n Last name: %s\n Age: %d\n Type: %s\n Brand:%s\n Number: %s\n", 
        i+1, 
        list[i].owner_1.first_name, 
        list[i].owner_1.last_name,
        list[i].owner_1.age,
        list[i].type, 
        list[i].brand, 
        list[i].car_num);
      }
      
      if(list[i].owner_1.age == '\0')
        {
          printf("The line is empty\n");
          break;
        }
    } while(i != size);
}