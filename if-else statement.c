// IF - ELSE STATEMENT

#include <stdio.h>

int main() {
    int i;
    printf("Enter your birth date: \n");
    scanf("%d", &i );
    if(i<23 && i>0 ){
        printf("You are beautiful \n");
    }
    else{
        printf("You are eligible for your marriage");
    }
    
    return 0;
}