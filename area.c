#include<stdio.h>
int main(){
    int l,b,AR,PR,r;
    float pi=3.14,AC,PC;
    printf("Enter the values for lenght, breadth of rectangle and radius of circle:\n");
    scanf("%d %d %d", &l, &b, &r);
    PR = 2*(l+b);
    AR = l*b;
    PC = 2*pi*r;
    AC = pi*r*r;
    printf("The perimetre and area of rectangle are %d %d\nThe perimetre and area of circle is %.2f %.2f", PR,AR,PC,AC);
    return 0;
}
