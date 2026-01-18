#include<stdio.h>
float temperature(int n);

int main(){
   int n; 
   float f;
   printf("Enter the temperature in celsius: ");
   scanf("%d",&n);
   printf("Temperature in fahrenheit is %.2f", temperature(n));
   return 0;
}

float temperature(int n){
   float f;
   f = (n * 1.8) + 32;
   return f; 
}