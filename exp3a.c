#include<stdio.h>
int main(){
    int a=10;
    int c=2;
    int b=a%c;
    if(b==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    return 0;
}