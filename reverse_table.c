#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=n;i>0;i--){
        printf("%d x %d = %d\n",n,i,n*i);
    }      /*i can also be written instead of i>0 as
          eventually the value of i will be zero which
          the condition in for() false */
    return 0;
}