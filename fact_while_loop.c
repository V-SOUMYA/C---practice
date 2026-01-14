#include<stdio.h>
int main(){
    int i=1,n,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while(i<=n){
        fact*=i;
        i++;
    }
    printf("%d! = %d",n,fact);
    return 0;
}