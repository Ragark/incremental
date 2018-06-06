#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void){


  int people, foodincome, foodproduction;

  srand(time(NULL));

  people = 1000; //starting pop

while (people < 1 || people > 100000000) {
  int foodrandom = (rand( ) % 2) + 1;
  printf("%d\n",foodrandom);
  people = foodrandom;

 }

  return 0;
}
