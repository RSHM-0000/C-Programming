#include <stdio.h>

char evod(int x){
  if (x%2==0){
    printf("It's even");}
  else{ printf("It 's odd");}

}

int main(){
 int n;
 printf("Enter the no. : ");
 scanf("%d",&n);
 printf("%s",evod(n));
}