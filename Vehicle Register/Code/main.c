#include "source.h"

int main(void) {
  int choice;
  vehicle_reader list [MAX_CAR];
  file_reader(list);
  do {
    meny();  
    choice = sakerinmatning();
    switch(choice)
      { 
        case 1:
        scan_car(list);
        
        break;
        
        case 2:
        cleaner(list, size);
        break;
        
        case 3:
        sort(list);
        break;
        
        case 4:
        print_1(list, size);
        break;
        
        case 5:
        print_all(list);
        break;

        case 6:
        file_writer(list);
        printf("mission compelete\n");
        break;

        case 0:
        file_writer(list);
        printf("exit\n");
        break;
       }
    
  }while(choice != 0);

  return 0;
}

