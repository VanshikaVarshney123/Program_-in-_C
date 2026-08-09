#include<stdio.h>
#include<string.h>

int main(){

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0) return "";

    // Loop through each character position of the first string
    for (int i = 0; strs[0][i] != '\0'; i++) {
        char currentChar = strs[0][i];

        // Compare this character across all other strings
        for (int j = 1; j < strsSize; j++) {
            // Check for mismatch OR reaching the end of another string
            if (strs[j][i] == '\0' || strs[j][i] != currentChar) {
                strs[0][i] = '\0'; // Cut string off at mismatch point
                return strs[0];
            }
        }
    }

    return strs[0];
}
}