#include <stdio.h>
void main()
{
 int n;
 printf("Enter the number: ");
 scanf("%d",&n);
 if (n==0){
 printf("The number is 0");
}else if(n>0){
 printf("The number is positive");
}else if(n<0){
 printf("The number is negative");
}
}