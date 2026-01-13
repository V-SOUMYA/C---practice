#include<stdio.h>
int main(){
    int a,b;
    float n;
    printf("Enter two numbers:\n");
   
    scanf("%d %d", &a, &b);
    n = (float)(a+b)/2;
    printf("The average of two numbers is %.2f",n);
    return 0;
}