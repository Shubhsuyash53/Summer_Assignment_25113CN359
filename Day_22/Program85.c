//Program to check if a string is palindrome
#include<stdio.h>
int main(){
    char str[100];
    int i=0,j,flag=0;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0'){
        i++;
    }
    for(j=0;j<i/2;j++){
        if(str[j]!=str[i-1-j]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;
}