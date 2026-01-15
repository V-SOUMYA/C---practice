#include<stdio.h>
int main(){
    int i,n,b;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0 && i!=2){
            b=0;
            break;
        }
    }
    if (b==0 && n!=2)
    {
        printf("%d is a composite number\n",n);
    }
    else
    {
        printf("%d is a prime number\n",n);
    }
    return 0;  
}