#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str) 
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        
        while (str[left] == ' ') {
            left++;
        }
        
        while (str[right] == ' ') {
            right--;
        }

        if (str[left] != str[right]) {
            return 0; 
        }

        left++;
        right--;
    }
    return 1; 
}

int main() 
{
    char string1[] = "я иду с мечем судия";

    if (isPalindrome(string1)) {
        printf("\"%s\" - является палиндромом\n", string1);
    } else {
        printf("\"%s\" - не является палиндромом\n", string1);
    }


    return 0;
}
