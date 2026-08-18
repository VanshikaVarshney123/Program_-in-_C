/* There is a problem worth 
X points and it has 
10 test cases.
It is known that
X is a multiple of 10.
It is known that each test case is worth the same number of points.
You pass
N test cases among them. Determine the score that you will get.  */

#include <stdio.h>

int main() {
    int i=0,t;
    scanf("%d", &t);
    
    while (i<t) {
        int X, N, points_per_testcase, score;
        scanf("%d%d", &X, &N);

        points_per_testcase = X/10;
        score = points_per_testcase*N;

        printf("%d\n", score);
        i++;
    }

    return 0;
}