// FIND THE FIRST PEAK ELEMENT

#include <stdio.h>

int main() {
   int nums[] = {4, 5, 9, 2, 1, 17};
   int size = sizeof(nums)/sizeof(nums[0]);
   
   for ( int i = 1; i < size-1; i++){
       if ( nums[i]>nums[i-1] && nums[i]>nums[i+1]){
           printf("The first peak element is %d\n ", nums[i] );
           break;
       }
   }
   
    return 0;
}