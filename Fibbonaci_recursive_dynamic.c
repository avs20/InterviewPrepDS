#include <stdio.h>
#include <stdlib.h>


int fibRecursion(int n ){
    
    if (n == 0 ) return 0;
    if (n == 1) return 1;
    
    return (fibRecursion(n-1) + fibRecursion(n-2));
    
    
}

int fibDynamicProg(int n ){
    
    int first = 0 ;
    int second = 1; 
    
    long long  val = 0 ;
    for ( int i = 3 ; i <= n ; i++){
        
         val = first + second ;
         
         first = second; 
         second = val; 
        
    }
    
    return val;
}


int main(int argc , char *argv[]){
    
    int num = atoi(argv[1]);
    
    long long  result = fibDynamicProg(num);
    
    printf("%d\n", result);
    
}