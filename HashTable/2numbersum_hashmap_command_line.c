#include <iostream>
#include <map>

using namespace std;

//cout << cin 

int main(int argc, char *argv[]) {
  //argc = count of arguments passed - number 
  //argv = array - each position contains 1 argument 

  cout << "Total arguments passed : " <<argc <<"\n";
  cout << "First argument is "  <<argv[0];

  int len = atoi(argv[1]);

  int arr[len];

  for (int i = 0 ; i < len ; i++){

    arr[i] = atoi(argv[i+2]);
  }

  int targetSum = atoi(argv[argc - 1]);

  cout<<endl;
  cout << "Array length " <<len <<endl;
  cout <<"Target sum " << targetSum <<endl;

  //Problem 
  // 2 number ka sum 
  // array me se 2 number nikalo jo target pe ho 

  map<int , int > hmap;

  for (int i = 0 ; i < len ; i++){

    int toFind = targetSum - arr[i];

    auto isfound = hmap.find(toFind);

    if (isfound != hmap.end()){
      //mil gya isme 
      cout << arr[i] <<"\t"<< toFind <<endl;
    }else{
      //the number is not found 
      hmap.insert({arr[i], 1});
    }

  }

  
}