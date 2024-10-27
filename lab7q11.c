#include <stdio.h>

 int addition(int x,int y){
  int add;
  add = x + y;
  printf("The sum is %d",add);
  return add;}

 int subtraction(int x,int y){
  int subtract;
  subtract = x - y;
  printf("The difference is %d",subtract);
  return subtract;}

 int multiplication(int x,int y){
  int multiply;
  multiply = x*y;
  printf("The product is %d",multiply);
  return multiply;}

 int division(int x,int y){
  int divide;
 
 if (y==0){
   printf("Error");
   return 0;}
 else{
  divide=x/y;
  printf("The quotient is %d",divide);
  return divide;}
}

int main(){

 int x,y;
 printf("Enter x and y: ");
 scanf("%d %d",&x,&y);

 char arithematic;
 printf("Enter the operator: ");
 scanf(" %c",&arithematic);//Add space to handle a newline.

 if (arithematic == '+'){
   addition(x,y);}
 else if (arithematic =='-'){
   subtraction(x,y);}
 else if(arithematic =='*'){
  multiplication(x,y);}
 else if(arithematic =='/'){
   division(x,y);}
 else{
   printf("Sorry, try again later.");}

 return 0;
}