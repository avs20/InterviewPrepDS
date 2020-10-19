/*
Write a  program to find year is a Leap year or not
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    //input 200 1900 2000 2020
    
    //for tcs exams - int     string → int
    //atoi() 

    int year = atoi(argv[1]);
    
    if (year % 4 != 0 ){
        printf("Not a leap year ");
        return 0;
    }
    
    if ( (year % 100 == 0)  && (year % 400 == 0) ){
        printf("It's a leap year ");
        return 0;
    }
    
    if (year % 4 == 0){
        printf("It's a leap year ");
        return 0;
    }
    
    printf("Not a leap year");
    
    
    
    return 0;
}
