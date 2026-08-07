// ADDING TWO ARRAYS
 
#include <stdio.h>

int main() {
    // declare two arrays of same size
    int marks_of_secA[6] = {34, 56, 78, 46, 99, 100};
    int marks_of_secB[6] = {66, 89, 60, 45, 88, 23};
    
    // declare an array to store the sum of the elements
    int sum[6];
    
    // Add corresponding elements using a loop
    for(int i = 0; i<6; i++){
        sum[i] = marks_of_secA[i] + marks_of_secB[i]; 
    }
    // Print the result
    printf("Sum Array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    
  return 0;
}