/* In a coding contest, there are prizes for the top rankers. The prize scheme is as follows: Top
10 participants receive rupees 
X each.
Participants with rank
11 to
100 (both inclusive) receive rupees
Y each.
Find the total prize money over all the participants. */


#include <stdio.h>

int main() {
    int t,X,Y;
    int i = 1;
    int prize_top10;
    int prize_11to100;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d %d", &X, &Y);
        prize_top10 = 10*X;
        prize_11to100 = 90*Y;
        printf("%d\n", prize_top10 + prize_11to100);
        i = i+1;
    }
    return 0;
 }