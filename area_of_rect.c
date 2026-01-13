#include<stdio.h>
int main(){
    int l,b,area;
    printf("Enter the values of lenght and breadth:\n");
    scanf("%d %d", &l,&b);
    area = l*b;
    printf("The area of rectangle is %d",area);
    return 0;
}