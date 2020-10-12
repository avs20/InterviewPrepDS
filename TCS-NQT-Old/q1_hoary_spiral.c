#include <stdio.h>


int main(void) {

  int n  = 0;

  printf("Enter num of steps:");
  scanf("%d", &n);

  int x = 0 ;
  int y = 0 ;
  int distance = 10;
  char step = 'R';

  while(n > 0){
    switch(step){

      case 'R' : x = x + distance;
                 step = 'U';
                 distance += 10;
                 break;

      case 'U' : y = y + distance;
                 step = 'L';
                 distance += 10;
                 break;

      case 'L' : x = x - distance;
                 step = 'D';
                 distance += 10;
                 break;

      case 'D' : y =  y - distance;
                 step = 'A';
                 distance += 10;
                 break;

      case 'A' : x = x + distance;
                 step = 'R';
                 distance += 10;
                 break;
                 

    }

    n = n - 1;
  }

  printf("%d %d", x, y);
  
  return 0;
}
