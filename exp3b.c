#include<stdio.h>
int main(){
    char ch;
    printf("enter the character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='o'){
        printf("vowel");
    }
    else{
        printf("consonent");
    }
    return 0;
}