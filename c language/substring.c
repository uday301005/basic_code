#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isVowel(char c)
 { c = tolower(c); 
 return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'); }

void printSubstrings(char *str) {
    int n = strlen(str);

    printf("All substrings are:\n");
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
                // if(isVowel(str[i]))
                    
               
            }
            printf("\n");
        }
    }
}

int countSubstrings(char *str) {
    int n = strlen(str);
    return (n * (n + 1)) / 2;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int count = countSubstrings(str);
    printf("Number of substrings: %d\n", count);

    printSubstrings(str);

    return 0;
}
