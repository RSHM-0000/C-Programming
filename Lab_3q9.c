#include <stdio.h>
#include <math.h>
void main(){
 int a,b,c,disc;
 printf("Enter the value of a, b and c: ");
 scanf("%d %d %d",&a,&b,&c);
 disc = b*b - 4*a*c;
 if (disc>0){
   printf("The quadratic equation has real and unique roots. Hurray! You get 20 points.");}
 else if (disc==0){
   printf("The quadratic equation has real and same roots. Sorry! You get no points.");}
 else{
   printf("The quadratic equation has imaginary roots. Hurray! You get 10 points.");}
}