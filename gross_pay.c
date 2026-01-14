#include<stdio.h>
int main(){
    float bs,hra,da,gs;
    printf("Enter the basic salary: ");
    scanf("%f",&bs);
    da = (0.4)*bs;
    hra = (0.2)*bs;
    gs = bs -(da + hra);
    printf("Basic Slaray = %f\n",bs);
    printf("Dearness Allowance = %f\n",da);
    printf("House Rent Allowance = %f\n",hra);
    printf("Gross Pay = %f\n",gs);
    return 0;

}