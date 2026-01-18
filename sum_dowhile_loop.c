#include<stdio.h>
int main(){
    int i=1,n,sum=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    do{
        sum+=i;
        i++;
    }while(i<=n);
    printf("The summation of n natural number is %d",sum);
    return 0;
}