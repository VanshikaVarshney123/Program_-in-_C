// CONTINUE + BREAK STATEMENT

#include <stdio.h>

int main() {
   int i;
   for(i=0; i<199; i++){
       printf("Happy Birthday dear \n");
       if(i==30){
           break;
       }
   }
   
   int skip = 7;
   int a = 0;
   while(a<17){
       if(a==skip){
           a++;
           continue;
       }
       printf("Hello Guyyysss \n");
       a++;
   }

    return 0;
}