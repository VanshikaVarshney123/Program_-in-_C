// Let's write a program in the IDE which performs the following:

/* The 1st line of input contains t - the count of testcases.
Each testcase consists of the following 2 lines of input:
The 1st line of the testcase contains 2 integers - accept them as variables A and B.
The 2nd line of the testcase contains 1 string - accept it as a variable S. */

#include <stdio.h>

int main() {
    int t;
    int A, B;
    char C[30];
    int i = 1;
    scanf("%d", &t);
    while (i <= t) {
        scanf("%d %d", &A, &B);
        scanf("%s", &C);
        printf("%d %d %s\n ", A, B, C);
        i = i + 1;
    }
}