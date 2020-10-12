#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main(void) {

  char input[101];

  printf("Enter a number");
  scanf("%s", input);

  int len = strlen(input);

  int evenSum = 0;
  int oddSum = 0;

  for (int i = 0 ;i <len;i++){

      int val = input[i] - 48;

      if (i%2 == 0) evenSum += val;
      else oddSum += val;


  }

  int result = evenSum-oddSum;
  printf("%d", abs(result));

  
  return 0;
}