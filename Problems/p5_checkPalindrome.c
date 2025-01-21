// Check if a string is a palindrome
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char string[]);

int main(int argc, char const* argv[])
{
    char string1[] = "mehedi";
    char string2[] = "abccba";

    if (isPalindrome(string1))
        printf("%s \n- is a palindrome\n", string1);
    else
        printf("%s \n- is not a palindrome\n", string1);

    if (isPalindrome(string2))
        printf("%s \n- is a palindrome", string2);
    else
        printf("%s \n- is not a palindrome", string2);

    return 0;
}

bool isPalindrome(char string[]) {
    int length = strlen(string);
    for (int i = 0; i < length / 2; i++)
    {
        if (string[i] != string[length - i - 1])
            return false;
    }

}

