#include <stdio.h>

int max(int x, int y ,int z){
  
  if (x>y && x>z){
    return x;
 }
 else if (y>x && y>z){
    return y;
 }
 else{    return z;
 }

}

int main(){
  int x,y,z;
  printf("Enter x, y,z: ");
  scanf("%d %d %d",&x,&y,&z);
  printf("The max is %d",max(x,y,z));
  return 0;
}




