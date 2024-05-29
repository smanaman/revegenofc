#include<stdio.h>
#include<string.h>
int main(){
    char item[100];
    int value[100];
    int sum=0;
    for (int i = 0; i < 25; i++)
    {
        printf("Enter your item:=");
    scanf("%s",&item);
        printf("Enter your value:=");
    scanf("%d",&value[i]);
    sum +=value[i];
  if (value[0] == '\n'){
        break;
    }
    
    }
     printf("Your total value is:=%d",sum);
}