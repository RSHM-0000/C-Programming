#include <stdio.h>
void main(){
 
 int avg;
 printf("Enter your average marks: ");
 scanf("%d",&avg);

 if (avg>80){
     printf("A");}
 if (avg>60 && avg<=80){
     printf("B");}
 if (avg>40 && avg<=60){
     printf("C");}
 if (avg<=40){
     printf("D");}
}