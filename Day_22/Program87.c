//Program to check character frequency in a string
#include<stdio.h>
int main(){
    char str[100];
    int i=0,freq[256]={0};
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0'){
        freq[str[i]]++;
        i++;
    }
    printf("Character frequency in the string:\n");
    for(i=0;i<256;i++){
        if(freq[i]>0){
            printf("'%c': %d\n",i,freq[i]);
        }
    }
    return 0;
}