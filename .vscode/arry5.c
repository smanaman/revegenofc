#include<stdio.h>
int main(){
int start,end,i;
 printf("Enter your first ");
 scanf("%d",&start);
  printf("Enter your first ");
 scanf("%d",&end);
 int x=0;
 int arr[100];
 for (int i = start; i < end; i++)
 {
    if(i%4==0){
   arr[x]=i;
   printf("%d",arr[x]);
   x++;
    }
 }
}
 