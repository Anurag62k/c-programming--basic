#include <stdio.h>
#include <string.h>

int main() {
    char a[30];
    int n, i, flag = 1;

    printf("Enter a string: ");
    scanf("%s", a);     

    n = strlen(a);

    for (i = 0; i < n; i++) {
        if (a[i] != a[n - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("given string is palindrome\n");
    else
        printf("given string is not palindrome\n");

    return 0;
}