#include<string.h>

int lengthOfLastWord(char* s) {
    int i = strlen(s) - 1;  // Start at last character 
    while (i >= 0 && s[i] == ' ') {
    // Move backwards
    i--;
}

int length = 0;
while (i >= 0 && s[i] != ' ') {
    length++;
    i--;
    
}

return length;
}
