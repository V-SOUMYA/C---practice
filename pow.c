#include <stdio.h>

int main(){
  int va,q;
  q= binary(va);
   return q;
  
}
int binary(int num){
  int i, binary, temp;
    printf(" ");
    scanf("%d", &num);
    binary = 0;
    temp = 1;
    while (num != 0)
    {
      i = num % 2;
      num = num / 2;
      binary = binary + i * temp;
      temp = temp * 10;
    }
    return binary;
  }
