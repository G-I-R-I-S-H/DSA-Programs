#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    while (right > left) {
        if (str[left++] != str[right--])
            return 0;
    }
    return 1;
}

int main() {
    char str[] = "radar";
    if (isPalindrome(str))
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);
    return 0;
}
