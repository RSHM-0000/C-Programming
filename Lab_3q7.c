#include <stdio.h>
#include <ctype.h>
void main(){

 char ch;
 printf("Enter: ");
 scanf("%c",&ch);

 if (isupper(ch)){
    ch=tolower(ch);}

 if (ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch == 'u'){
   printf("You get five points!");}
  else if (isdigit(ch)){
   printf("You get ten points!");}
  else{
   printf("Oops! You get no points.");}
}