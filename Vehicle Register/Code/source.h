#ifndef SOURCE_H
#define SOURCE_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_CHAR 100
#define MAX_CAR 10


struct person
{
  char first_name[MAX_CHAR];
  char last_name[MAX_CHAR];
  int age;
};
typedef struct person person_reader;

struct vehicle 
{
  char type[MAX_CHAR];
  char car_num[MAX_CHAR];
  char brand[MAX_CHAR];
  person_reader owner_1;
};
typedef struct vehicle vehicle_reader;

void meny();
void scan_car(vehicle_reader *list);
int file_reader(vehicle_reader *list);
void file_writer(vehicle_reader *list);
void cleaner(vehicle_reader *list, int size);
void print_1(vehicle_reader *list, int size);
void sort(vehicle_reader *list);
void print_all(vehicle_reader *list);
int sakerinmatning();
#endif