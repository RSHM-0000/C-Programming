#include <stdio.h>

int area(int x){
   int result1;
   result1=x*x;
   return result1;
}

int perimeter(int x){
    int result2;
    result2=4*x;
    return result2;
}

int main(){
  int a;
  printf("Enter the side of the square: ");
  scanf("%d",&a);
  printf("The perimeter of the square is: %d\n",area(a));
  printf("The area of the square is: %d",perimeter(a));
  return 0;
}