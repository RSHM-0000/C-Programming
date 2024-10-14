# include <stdio.h>
# include <ctype.h>

void main(){
 
 char ch;
 printf("Enter the alphabet: ");
 scanf("%c",&ch);
 
 if (islower(ch)){
   printf("It is a lowercase letter.");}
 else{
   printf("It is an uppercase letter.");}
}
