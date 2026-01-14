#include<stdio.h>
int main(){
    int x=1189, n=841,p,q, A;
    printf("Paper of size A0 has dimensions 1189mm x 841mm\n");
    printf("Enter the size of the paper");
    scanf("%d", &A);
    p=n;
    q=x/2;
    printf("The dimensions of the paper %d is %d x %d", A,p,q);
    return 0;

}