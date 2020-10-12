#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

  char input[4];

  scanf("%s", input);

  int len = strlen(input);

  int power= len - 1;

  int result = 0;

  for (int i = 0 ;i < len ;i++){
    int val = input[i];

    if (val >=97){
        // val = val - 97 +10 
        val = val - 87;
    }else if (val >= 65){
      val = val - 65 + 10 ;
    }
    else {
      // subtract from value of 0
      val = val - 48;
    }

    result += val * pow(17, power);

    power -= 1;


  }




  printf("\n%d", result);
  return 0;
}