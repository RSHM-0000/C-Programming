#include <stdio.h>
void main(){

 int height,weight, BMI;
 printf("Enter your height in m: ");
 scanf("%d",&height);
 printf("Enter your weight in kg: ");
 scanf("%d",&weight);

 BMI = weight/(height*height);

 if (BMI < 18.5){
   printf("You are underweight.");}
 else if  ((BMI>=18.5) && (BMI<=24.9)){
   printf("You have a normal weight.");}
 else {
   printf("You are overweight.");}
}