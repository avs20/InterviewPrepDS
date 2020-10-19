#include <stdio.h>
#include <string.h>

int minSwaps(int arr[], int len){
  //intialize to -1 
  int minSwapCount = 0; 

  if (len % 2) return  -1;


  //create the visited array
  int visited[len/2+1];
  //initialize the array to 0. 0 = the element is not swapped
  memset(visited, 0 , len/2+1);

  for (int i = 0 ;i < len ; i++){

        //check if current element is not swapped
        if (visited[arr[i]] == 0){
            //mark it as visited
            visited[arr[i]] = 1;

            //count for current element
            int count = 0;
            for (int j = i + 1 ; j < len ; j++){
                
                if (visited[arr[j]] == 0){
                    count += 1;
                }

                else if (arr[i] == arr[j]){
                  minSwapCount += count;
                }
            }
        }
  } 

  return minSwapCount;

}


int main(void) {

  int len; 
  scanf("%d", &len);

  int input[len];

  for(int i = 0 ;  i < len ;i++){
    scanf("%d", &input[i]);
  }

  int result = minSwaps(input, len);

  printf("Min Swaps %d", result);
  
  return 0;
}
