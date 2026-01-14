#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3,z1,z2,z3,a;
    printf("Enter the values\n");
    scanf("%d %d %d %d %d %d %d %d %d", &x1,&x2,&x2,&x3,&y1,&y2,&y3,&z1,&z2,&z3);
    a = x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if (a==0)
    {
        printf("The given points fall on a straight line");
    }
    else
    {
        printf("The given points doesn't form a straight line");
    }
    return 0;
    
    

    
}