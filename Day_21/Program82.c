//Program to reverse a string without using library function
#include<stdio.h>
int main(){
    char str[100];
    int i=0,j;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0'){
        i++;
    }
    for(j=i-1;j>=0;j--){
        printf("%c",str[j]);
    }
    return 0;
}