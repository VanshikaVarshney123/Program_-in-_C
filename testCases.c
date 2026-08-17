/* Let's solve a simple problem.
Write a program in the IDE which does the following */

/* Accepts the count of test cases - t - as an integer input given in the 1st line.
This is followed by t lines - Each line contains an integer N
For each test cases, prints out the integer N to console on a separate line (our Input mirror problem) */ 

#include <stdio.h>

int main() {
    int t,n;
    int i = 1;
    scanf("%d", &t );
    while ( i <= t) {
        scanf("%d", &n );
        printf("%d \n", n );
        i = i+1;
    }
}