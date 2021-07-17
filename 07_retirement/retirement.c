#include <stdio.h>
#include <stdlib.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};

typedef struct _retire_info retire_info;

double calculation(double initial,retire_info money){
  initial += initial * money.rate_of_return + money.contribution;
  return initial;
}

void retirement (int startAge, double initial, retire_info working, retire_info retired ){
  
   for(int i = 0 ; i < working.months ; i++){ 
    printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
    initial = calculation(initial , working);
    startAge++;
  }

   for(int i = 0 ; i < retired.months ; i++){ 
    printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
    initial = calculation(initial , retired);
    startAge++;

   } 
   
}
int main(void){

  retire_info Working;
  retire_info Retired;
  int age = 327;
  double savings = 21345;
  
  Working.months = 489;
  Working.contribution = 1000;
  Working.rate_of_return = 0.045/12;

  Retired.months = 384;
  Retired.contribution = -4000;
  Retired.rate_of_return = 0.01/12;

  retirement(age,savings,Working,Retired);
  
  return 0;
}
