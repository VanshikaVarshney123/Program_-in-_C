/* Chef wants to become fit for which he decided to walk to the office and return home by walking.
It is known that Chef's office is 
X km away from his home.
If his office is open on 
5 days in a week, find the number of kilometres Chef travels through office trips in a week. */

#include <stdio.h>

int main() {
    int t,X;
    int i = 1;
    scanf("%d", &t );
    while (i <= t){
        scanf("%d", &X);
        printf("%d\n", 10*X);
        i++;

      }
    return 0;
}
 