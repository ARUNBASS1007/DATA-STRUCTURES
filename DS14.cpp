#include <stdio.h>
#include <ctype.h>
int isValidString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalpha(str[i]))
            return 0;  
    }
    return 1; 
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isValidString(str))
        printf("Valid String (Alphabets only)\n");
    else
        printf("Invalid String (Contains non-alphabet characters)\n");

    return 0;
}

