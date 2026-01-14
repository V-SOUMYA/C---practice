#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    c = a*b;
    printf("The multiplication of the given two numbers is %d", c);
    return 0;
}