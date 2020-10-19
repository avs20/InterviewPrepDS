#include <stdio.h>
#include <string.h>

int isPalindrome(char *arr){

  int leftIdx = 0;
  int rightIdx = strlen(arr) -1;

  int result = 1;
  while(leftIdx <= rightIdx){
      if(arr[leftIdx] != arr[rightIdx]){
        result = 0;
        break;
      }

      leftIdx++;
      rightIdx--;
  }

  return result;

}


int main(void) {

  char *arr1 = "abc";
  char *arr2 = "aba";

  // 0 is not Palindrome
  // 1 is palindrome

  printf("%d\n", isPalindrome(arr1));
  printf("%d\n", isPalindrome(arr2));
  return 0;
}