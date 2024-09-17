#include <stdio.h>
void main()
{
 char ch;
 printf("Enter a character: ");
 scanf("%c",&ch);
 if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
   printf("It is an alphabet character.");
 }
  else {
   printf("It is not an alphabet charchter.");
  }
}