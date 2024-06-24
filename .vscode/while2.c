#include<stdio.h>

int main(){

int num;
int sum=0;

do
{
      printf("enter your number");
    scanf("%d",&num);
    sum += num;
 
} while (num>0);

 if(num<0){
     printf("sum=0");
    
  }else{
   printf(" your sum is :-%d",sum);
  }

                                          
}
 







