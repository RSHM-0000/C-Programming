#include <stdio.h>
void main()
{
 int  n1,n2,n3,max;
 printf("Enter n1, n2 and n3: ");
 scanf("%d %d %d",&n1,&n2,&n3);
 if(n1>n2 && n1>n3)
    max=n1;
 else if(n2>n1 && n2>n3)
    max=n2;
 else if(n3>n1 && n3>n2)
    max=n3;
 printf("%d is the max number.",max);
}