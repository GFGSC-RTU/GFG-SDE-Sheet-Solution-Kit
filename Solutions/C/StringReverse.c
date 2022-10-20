//https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1


#include<stdio.h>

// Function to find length of string
int slen(char str[]){
    int len=0;
    for (int i = 0; str[i]!='\0'; i++){
        len++;
    }
    return len;
}

void main(){

    char str[50];
    printf("Enter the String:");
    scanf("%[^\n]",str);

    int length=slen(str);

    // Reversing the string
    char rstr[50];
    for (int i=length-1,j=0; i>=0;i--,j++){
        rstr[j]=str[i];
    }

    // Printing the reverse of string
    printf("The reverse is: ");
    for (int i = 0; i < length;i++){
        printf("%c",rstr[i]);
    }
}
