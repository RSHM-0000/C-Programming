#include <stdio.h>
void main()

{
 char ch;
 printf("Enter the alphabet: ");
 scanf("%c",&ch);
 if(ch >= 'a' && ch <= 'z'){
 printf("It is a lowercase letter");}
 if (ch>= 'A' && ch<= 'Z'){
 printf("It is an uppercase letter");}
 else{printf("Error");}
}