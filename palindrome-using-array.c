#include <stdio.h>
#include <string.h>

int main() {
    char string1[20];
    int i, length;
    int flag = 0;

    // Input string from user
    printf("Enter a string: ");
    scanf("%s", string1);

    length = strlen(string1);

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (string1[i] != string1[length - i - 1]) {
            flag = 1;  // Set flag if not palindrome
            break;
        }
    }

    // Output result
    if (flag == 1) {
        printf("%s is not a palindrome\n", string1);
    } else {
        printf("%s is a palindrome\n", string1);
    }

    return 0;
}
