#include<stdio.h>
#include<string.h>
int main(){
    int age;
    int amount;
    char name[50];
   
    
printf("Enter your name=>"); // Ask user to Enter name

scanf("%[^\n]s",&name); // input your name and assign to name variable
 printf("Enter your age:=");
 scanf("%d",&age);
 if(age>=18){
printf("wel come to our web site\n");
printf("enter your amount:=");
scanf("%d",&amount);
if(amount<=100){
char subject[4][10]={"khakara","maggie","chocolet","milk"};  // item list

int price[50]; // user input price
int total=0; // Total sum of item
for (int i = 0; i<4; i++)
{

    printf("Subject : %s\n ",subject[i]); // print subject list

    scanf("%d",&price[i]); // assign marks into mark variable

    total += price[i]; // add marks to total
}

if(total<=100){
printf("your item total is:=%d",total);
}
else{
    printf("your amount is biggger than 100 sorry");
}
}else{
    printf("your amount bigger than 100 so sorry you can't enter our web site");
}
 }else{
printf("your age not 18 so good by");
 }
}