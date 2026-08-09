#include<stdio.h>
#include<string.h>

int val(char c){
    switch(c){
        case'I' : return 1;
        case'V' : return 5;
        case'X' : return 10;
        case'L' : return 50;
        case'D' : return 500;
        case'C' : return 100;
        case'M' : return 1000;
        default: return 0;
     }
}
int romanToInt(char* s) {
    
    int total = 0;
    int i=0;
    for(i=0; s[i]!='\0'; i++){
    if (val(s[i]) < val(s[i+1])){
        total-=val(s[i]);
         }
    else{
         total+= val(s[i]);
    }
    }
    return total; 
}