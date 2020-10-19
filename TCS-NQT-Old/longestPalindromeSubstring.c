#include <stdio.h>
#include <string.h>


void getLongestPalindromeFrom(char *arr, int leftIdx, int rightIdx, int *result){

    while( (leftIdx >= 0 ) && (rightIdx < strlen(arr))){
      if( arr[leftIdx] != arr[rightIdx])
        break;

      leftIdx--;
      rightIdx++;
    }

    result[0] = leftIdx +1;
    result[1] = rightIdx;

}


void longestPalindromeSubstring(char *arr){

  int currentLongestStart = 0;
  int currentLongestEnd = 1;

  int len = strlen(arr);


  for (int i = 1; i < len ; i++){

    int odd[2];
    int even[2];


    //this is when the stick is on the character
    getLongestPalindromeFrom(arr, i-1, i +1, odd);
    //this is when the stick is between the characters
    getLongestPalindromeFrom(arr, i- 1, i, even);

    int *longest;
    if ((odd[1] - odd[0]) > (even[1] -even[0])){
        longest = odd;
    }else{
      longest = even;
    }

    if ((longest[1] - longest[0]) > (currentLongestEnd - currentLongestStart)){
        currentLongestEnd = longest[1];
        currentLongestStart = longest[0];
    }
  }


  for (int i = currentLongestStart ; i< currentLongestEnd ; i++){
    printf("%c", arr[i]);
  }
  printf("\n");

}


int main(void) {

  char *arr =  "abc";
  char *arr2 = "abxyzzyxbce";
  //bzyzzyxb

  longestPalindromeSubstring(arr);
  longestPalindromeSubstring(arr2);
  
  return 0;
}