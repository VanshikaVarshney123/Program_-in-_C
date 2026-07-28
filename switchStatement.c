// SWITCH CASE STATEMENT 
#include <stdio.h>

int main() {
  int score;
  scanf("%d\n", score);
  printf("Enter your PT score \n", score);
    
  switch(score){
      case 1:
      if(score>0 && score<=10){
          printf("You are graded with grade A in your PT subject\n");
          break;
      }
      case 2:
      if(score>0 && score<8){
          printf("You are graded with grade B in your PT subject\n");
          break;
      } 
    case 3:
      if(score>0 && score<5){
          printf("You are graded with grade C in your PT subject\n");
          break;
      }
      case 4:
      if(score>0 && score<2){
          printf("You are graded with grade D in your PT subject\n");
          break;
      } 
      default:{
          printf("You are bad in physical education\n");
      }
  }

    return 0;
}