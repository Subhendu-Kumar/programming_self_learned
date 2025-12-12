#include <stdio.h>
#include <string.h>

void printPrefixes(char *str) {
    int len = strlen(str);
    printf("Prefixes:\n");
    printf("epsilon\n");
    for (int i = 1; i <= len; i++) {
        printf("%.*s\n", i, str);
    }
}

void printSuffixes(char *str) {
    int len = strlen(str);
    printf("Suffixes:\n");
    for (int i = 0; i < len; i++) {
        printf("%s\n", str + i);
    }
    printf("epsilon\n");
}

void printProperPrefixes(char *str) {
    int len = strlen(str);
    printf("Proper Prefixes:\n");
    printf("epsilon\n");
    for (int i = 1; i < len; i++) {
        printf("%.*s\n", i, str);
    }
}

void printProperSuffixes(char *str) {
    int len = strlen(str);
    printf("Proper Suffixes:\n");
    for (int i = 1; i < len; i++) {
        printf("%s\n", str + i);
    }
    printf("epsilon\n");
}

void printSubstrings(char *str) {
    int len = strlen(str);
    printf("Substrings:\n");
    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            printf("%.*s\n", j, str + i);
        }
    }
}

void printSubsequences(char *str, char *current, int index, int n) {
    if (index == n) {
        printf("%s\n", current[0] == '\0' ? "ε" : current);
        return;
    }
    int length = strlen(current);
    current[length] = str[index];
    current[length + 1] = '\0';
    printSubsequences(str, current, index + 1, n);
    current[length] = '\0';
    printSubsequences(str, current, index + 1, n);
}

int main() {
    int choice;
    char str[100], current[100] = "";
    
    while (1) {
        printf("Menu:\n");
        printf("1. Prefixes\n");
        printf("2. Suffixes\n");
        printf("3. Proper Prefixes\n");
        printf("4. Proper Suffixes\n");
        printf("5. Substrings\n");
        printf("6. Subsequences\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        
        if (choice == 7) break;
        
        printf("Enter the string: ");
        fgets(str, 100, stdin);
        str[strcspn(str, "\n")] = 0;
        
        switch (choice) {
            case 1:
                printPrefixes(str);
                break;
            case 2:
                printSuffixes(str);
                break;
            case 3:
                printProperPrefixes(str);
                break;
            case 4:
                printProperSuffixes(str);
                break;
            case 5:
                printSubstrings(str);
                break;
            case 6:
                printSubsequences(str, current, 0, strlen(str));
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
