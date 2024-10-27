#include <stdio.h>

 int add(int x, int y){
   int sum;
   sum = x + y;
   return sum;
}

int main()
{
 int x,y;
 printf("Enter x and y: ");
 scanf("%d %d",&x,&y);
 printf("The sum is: %d",add(x,y));

 return 0;
}
  