#include <stdio.h>

int main(void) {


  printf("Enter position");
  int n ;
  scanf("%d", &n);
  if (n%2 == 1){
      printf("%d", n-1);
  }else{
    int result = (n-2)/2;
    printf("%d", result );
  }


  return 0;
}