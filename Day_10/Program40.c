//Program to print a palindromic letters pyramid
#include <stdio.h>
int main() {
    int i, j;
    char ch;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 5 - i; j++) {
            printf("  "); 
        }
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }
        ch -= 2;
        for (j = i - 1; j >= 1; j--) {
            printf("%c ", ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}
