// C program to find the maximum number of handshakesM
#include<stdio.h>  
int main()
{
//fill the code
int num;
scanf("%d",&num);
int total = num * (num-1) / 2; // Combination nC2
printf("%d",total);
return 0;
}
