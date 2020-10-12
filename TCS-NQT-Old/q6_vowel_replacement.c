#include <stdio.h>
#include <string.h>

int main(void) {


  char str1[5];
  char str2[5];
  char str3[5];



  scanf("%s", str1);
  scanf("%s", str2);
  scanf("%s", str3);

  int len1 = strlen(str1);
  int len2 = strlen(str2);
  int len3 = strlen(str3);

  // first string, all vowels replaced by *. 
  //a, e i o u 

  for (int i = 0 ; i <len1 ; i++){
    if (str1[i] == 'a' ||str1[i] == 'e'||str1[i] == 'i'||str1[i] == 'o'||str1[i] == 'u' ){
      str1[i] = '*';
    }else if (str1[i] == 'A' ||str1[i] == 'E'||str1[i] == 'I'||str1[i] == 'O'||str1[i] == 'U' ){
      str1[i] = '*';
    }
  }


  //second string replace consonant with add 
  for (int i = 0 ; i <len2 ; i++){
    if (str2[i] != 'a' && str2[i] != 'e' && str2[i] != 'i' && str2[i] != 'o' && str2[i] != 'u' && str2[i] != 'A' && str2[i] != 'E' && str2[i] != 'I' && str2[i] != 'O' && str2[i] != 'U'  ){
      str2[i] = '@';
    }
  }

  //third string upper case 

  for (int i = 0 ;i <len3 ; i++){
    //a 97 
    //A 65  32 

    if (str3[i] >= 97 && str3[i] <=122){
      str3[i] = str3[i] - 32;
    }
  }



  printf("%s%s%s\n", str1, str2, str3);
  return 0;
}