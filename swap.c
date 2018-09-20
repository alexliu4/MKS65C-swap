#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int array[10];
int backArray[10];


int arrayMaker(){
  int i;

  time_t t = time(NULL);
  //printf("current time: %lu\n \n", t );

  srand(t);


  for(i = 0; i < 9; i++)  {
    array[i] = rand();
    printf("%d :     %d\n", i, array[i] );
  }
  printf("%d :     %d\n", 9, array[9] );
  return 0;
}

int pointArray(){
  int *ogPoint = array;
  int *newPoint = backArray + 9;
  int i;
  for (i = 0; i < 10; i++) {
    *(newPoint - i) = *(ogPoint + i);
    //printf("%d    &   %d\n", (newPoint - i) , (ogPoint + i) );
    //printf("%d    &   %d\n", *(newPoint - i) , *(ogPoint + i) );
  }
  for (i = 0; i < 10; i++) {
    printf("%d :     %d\n", i , backArray[i] );
  }
  return 0;
}

int main(){
  printf("------------------------------------ First Array ------------------------------------\n");
  arrayMaker();
  printf("------------------------------------ Second Array ------------------------------------\n");
  pointArray();
  return 0;
}
