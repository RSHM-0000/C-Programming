#include <stdio.h>
void main(){
 
 int x,y;
 printf("Enter the x and y co-ordinates: ");
 scanf("%d %d",&x,&y);

 if (x>0 && y >0){
   printf("Point lies in the first quadrant.");}
 else if (x<0 && y>0){
   printf("Point lies in the second quadrant");}
 else if (x<0 && y<0){
   printf("Point lies in the third quadrant");}
 else if (x>0 && y<0){
   printf("Point lies in the fourth quadrant");}
 else {
   printf("Point is the origin");}
}