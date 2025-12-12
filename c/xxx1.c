#include <stdio.h>
#include <ctype.h> // For the toupper() and tolower() functions

int main() {
    char inputString[100];
    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    
    printf("Original string: %s", inputString);
    
    for (int i = 0; inputString[i] != '\0'; i++) {
        if (isupper(inputString[i])) {
            inputString[i] = tolower(inputString[i]);
        }
        else if (islower(inputString[i])) {
            inputString[i] = toupper(inputString[i]);
        }
    }
    
    printf("Modified string: %s", inputString);
    
    return 0;
}
