#include<stdio.h>
#include<conio.h>
int main(){

    char glosry[4][10]={"milk","bread","oil","chocolet"};
int item[4];
int prise[500];
int total=0;

float gst;
float grand_total;
for (int i = 0; i<4; i++)
{

    printf("%s\n ",glosry[i]);
   scanf("%d",&item[i]);
   total += item[i];

}
printf("your total amount without gst:=%d\n",total);
gst=total * 0.18;
printf("your total amount with gst:=%.2f\n",gst);
grand_total=total + gst;
printf("your total amuont is:=%.2f",grand_total);
}