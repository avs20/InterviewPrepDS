#include <stdio.h>

int maxval(int x, int y){
  if (x > y){
    return x;
  }
  else{
    return y;
  }
}

int getMaxNonAdjacentSum(int *arr, int len){

  int maxSum[len];

  maxSum[0] = arr[0];
  maxSum[1] = maxval(maxSum[0], arr[1]);

  for (int i = 2; i < len ; i++){

    maxSum[i] = maxval(maxSum[i-1], maxSum[i-2]+arr[i]);

  }

  return maxSum[len-1];

}


int main(void) {

  int arr[] = {3, 5, 9, 7, 11 ,13};
  printf("%d\n", getMaxNonAdjacentSum(arr,6));
  return 0;
}