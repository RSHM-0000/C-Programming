#include <stdio.h>
void main()
{
 char ch;
 printf("Enter the alphabet: ");
 scanf("%c",&ch);
 if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U'){
 printf("It is a vowel");
 }else if (ch >= 'a' && ch <= 'z' || ch>= 'A' && ch<= 'Z'){
 printf("It is a consonant");
 }else{
 printf("You have not entered an alphabet.");
 }
}

 