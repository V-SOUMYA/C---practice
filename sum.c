#include<stdio.h>
int main(){
    int a,b,n;
    printf("Enter two numbers\n");
    scanf("%d %d", &a, &b);
    n = a+b;
    printf("The sum of %d and %d is %d", a,b,n);
    return 0;
}