#include<stdio.h>
int main(){
    int i,rem,num,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for ( i = 1; i < num; i++)
    {
        rem=num%i;
        if (rem==0)
        {
            sum+=i;
        }
    }
if (num=sum)
    {
        printf("Perfect number");
    }
    else
    {
        printf("Not a perfect number");
    }
    return 0;
}