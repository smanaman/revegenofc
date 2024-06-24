#include<stdio.h>
int main(){
    int size;
    int sum=0;
    printf("enter your value");
   scanf("%d",&size);
   
int a[size];
int b[size];
int c[size];
for (int i = 0; i<size; i++)
{
   printf("enter your value:- ");
    printf("arr[%d]= ",i);
   scanf("%d",&a[i]);
  
}
// your B vvalue
for (int i = 0; i<size; i++)
{
   printf("enter your value:- ");
    printf("arr[%d]= ",i);
   scanf("%d",&b[i]);
   
}

for (int i = 0; i<size; i++)
{
 c[i]=a[i]+b[i];
 printf("%d",c[i]);
}

}