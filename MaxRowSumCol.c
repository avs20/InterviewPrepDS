#include <stdio.h>

int main(void) {

  int N = 3, M=3;
  int matrix[N][M];

  // read the matrix 
  for (int i = 0 ; i < N ; i++ ){
    for (int j = 0 ; j < M ; j++){
      scanf("%d", &matrix[i][j]);
    }
  }

  int maxVal = -65536;
  int row = -1;

  //find the row with max sum 
  for (int i = 0 ; i < N ; i++ ){
    // the below loop will run for one row
    int sum = 0 ;
    
    for (int j = 0 ; j < M ; j++){

      sum += matrix[i][j];      
      
    }

    if (sum > maxVal){
      maxVal = sum;
      row = i; //save the row Index num
    }
  }
  printf("%d \t %d\n", maxVal, row);

//======================
  maxVal = -65535;
  //find the row with max sum 
  for (int i = 0 ; i < M ; i++ ){
    // the below loop will run for one column
    int sum = 0 ;
    
    for (int j = 0 ; j < N ; j++){

      sum += matrix[j][i];      
      
    }

    if (sum > maxVal){
      maxVal = sum;
      row = i; //save the row Index num
    }
  }

  printf("%d \t %d\n", maxVal, row);
  return 0;
}