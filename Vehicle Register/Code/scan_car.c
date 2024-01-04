#include "source.h"

void scan_car(vehicle_reader *list){
  int i;
  for(i=size-1;i<size;i++){
   printf("Entre the first name of owner: \n");
   scanf("%s", list[i].owner_1.first_name);

   printf("Entre the last name of owner: \n");
   scanf("%s", list[i].owner_1.last_name);

   printf("Entre age\n");
   list[i].owner_1.age = sakerinmatning();

   printf("Entre the type of car\n");
   scanf("%s", list[i].type);

   printf("Entre the carbrand\n");
   scanf("%s", list[i].brand);

   printf("Entre carnumber\n");
   scanf("%s", list[i].car_num);
  }
  
}