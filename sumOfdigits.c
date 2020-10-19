

/*
**Sum of digits of a number:**

4897 → 28 
1010 - > 2 

9090 →18
*/

/*

char input= argv[1];
    
    printf("%s", input);
    int sum = 0 ;
    
    for (int i = 0 ; input[i] != '\0' ; i++){
        
        sum += atoi(input[i]);
        
    }
    
    printf("%d", sum);

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[]){
  
  int num = atoi(argv[1])  ;
  
  int sum = 0 ;
  while(num > 0 ){
      
      sum =  sum + num % 10;
      
      //change the num by dividing by 10
      
      num = num / 10;
      
      
  }
    printf("%d", sum);
    
}
