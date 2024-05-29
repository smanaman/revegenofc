 #include<stdio.h>
#include<string.h>
float pr(int total,int sub){
    return(float)total/sub;
}

int main(){
char name[100];
char subject[4][10]={"matha","hindi","gk","since"};
int sub=4;
int mark[50];
int total=0;
float per;

printf("Enter your name=>");
scanf("%[^\n]s",&name);
printf("%s\n",name);
for (int i = 0; i<4; i++)
{

    printf("%s\n ",subject[i]);
   scanf("%d",&mark[i]);
   total += mark[i];

}
per=pr(total,sub);
printf("%.2f",per);
if(per<=90 & 80<=per){
    printf("your gread is A");
}
}