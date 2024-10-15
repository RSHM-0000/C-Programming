#include <stdio.h>
void main(){
 float amount,disc1,disc2,disc3;
 printf("Enter amount: ");
 scanf("%f",&amount);
 if (amount>=0 && amount<=1000){
   disc1=0.05*amount;
   printf("You get a discount of 5%% of %.2f",disc1,"for the amount %f\n",amount);}
 else if (amount>=1001 && amount<=5000){
	disc2=0.1*amount;
   printf("You get a discount of 10%% of %.2f",disc2,"for the amount %f\n",amount);}
 else if (amount>=5001 && amount<=10000){
	disc3=0.2*amount;
   printf("You get a discount of 20%% of %.2f",disc3,"for the amount %f\n",amount);} 
 else {
        printf("No discount available for the amount: %.2f\n", amount);
    }
}

