#include<stdio.h>
#include<string.h>
void hello(){
char name[100];
printf("Enter your name=>");
scanf("%[^\n]s",&name);
printf("%s\n",name);

printf("Enter your mark  sequence in this subject");
printf("matha\nsince\nhistry\nhindi\nand gujrate");
int arr[100];
int sum=0;
float sum2=0;
for (int i = 0; i<5; i++)
{
   printf("enter your value:- ");
    printf("arr[%d]= ",i);
   scanf("%d",&arr[i]);
   sum +=arr[i];

}
   sum2=sum;
printf("%d\n",sum);
printf("%.2f%%",sum2/5);

}


int main(){
hello();
}