#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter two numbers: ");
    scanf("%f %f", &a,&b);
    c=(a/b);
    printf("a/b = %f",c);
    return 0;
}