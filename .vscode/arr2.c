#include<stdio.h>
int main(){
    int size;
    int sum=0;
    printf("enter your value");
   scanf("%d",&size);
   
int arr[size];
for (int i = 0; i<size; i++)
{
   printf("enter your value:- ");
    printf("arr[%d]= ",i);
   scanf("%d",&arr[i]);
   sum +=arr[i];
}

printf("%d",sum/size);

}