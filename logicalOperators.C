// CODE WITH LOGICAL OPERATORS
/*
our logical operators are 
&&  and 
!=  not
||  or
 */
#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    if(age>0 && age<20){
        printf("You are a teenager guy");
    }
    
    else if(age != 0){
       printf("You are not born yet");
    }
    
    else{
        printf("You are a sinear citizen");
    }
    
    return 0;
}  