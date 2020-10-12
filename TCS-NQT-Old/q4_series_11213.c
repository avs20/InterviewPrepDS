#include <stdio.h>
#include <math.h>

int main(void) {


  printf("Enter the position : ");
  int n ;
  scanf("%d", &n);

  int power = (n - 1) / 2;

  int result = 0;

  if (n%2 != 0){
    result = pow(2,power);
  }else{
    result = pow(3, power);
  }

  printf("%d", result);
  return 0;
}