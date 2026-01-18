#include<stdio.h>
int main(){
    int A,B,C;
    printf("Enter the angles\n");
    scanf("%d %d %d", &A,&B,&C);
    if (A+B+C==180)
    {
        printf("A triangle is valid");
        /* code */
    }
    else
    {
        printf("Triangle is not possible");
    }
    return 0;
}