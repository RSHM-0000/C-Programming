#include <stdio.h>
void main()
{
 char ch;
 printf("Enter a character: ");
 scanf("%c",&ch);
 if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
   printf("It is an alphabet character.");
 }
  else if(ch >= '0' && ch <= '9'){
   printf("It is a digit.");
  }else{
    printf("It is a special charachter.");
 }
}