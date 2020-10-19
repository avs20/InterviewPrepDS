#include <stdio.h>

int waysOfChange(int amount, int *coins, int numCoins){

  int ways[amount+1];

  ways[0] = 1;
  //initialize 
  for (int i = 1 ; i <amount +1 ; i++){
      ways[i] = 0;
  }

  for (int i = 0 ; i < numCoins; i++ ){
    int coin =  coins[i];

    for (int amt=0; amt < amount + 1; amt++ ){
        if (coin <= amt){
          ways[amt] = ways[amt]  + ways[amt-coin];
        }
    }
  }

  return ways[amount];



}

int main(void) {
  int coins[] = {1,2,5};

  printf("%d", waysOfChange(4, coins,  3) );
  return 0;
}