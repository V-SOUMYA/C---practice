#include<stdio.h>
#include<conio.h>
int main(){
    char c;
    int ascii;
    printf("Enter a character: ");
    scanf("%c", &c);
    ascii=c;
    printf("ASCII value of %c is %d\n",c,ascii);
    
    if (c>=48 && c<=57)
    {
        printf("The given character is a digit\n");
    }
    else if (c>=65 && c<=90)
    {
        printf("%c entered is a capital letter\n",c);
    }
    else if (c>=97 && c<=122)
    {
        printf("The character entered is a small letter");
    }
    else
    {
        printf("Entered character is a special symbol");
    }
    
    return 0;
    
}