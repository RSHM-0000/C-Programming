#include <stdio.h>
void main(){

 int age;
 printf("Enter your age: ");
 scanf("%d",&age);

 if(age>=18){
   printf("The person is eligible to vote");}
 else{
   printf("The person is not eligible to vote");}
}