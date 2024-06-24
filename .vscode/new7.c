#include<stdio.h>
#include<string.h>

int main(){
typedef struct 
{
  int id;
  char name[128];
  int age; 
  float salary;
}emp;

emp employone,employtwo,employthree;
                                    // first employ
                                    printf("Enter your first employ details\n");
printf("Enter your id:=");
scanf("%d",&employone.id);

printf("\n");

printf("Enter your name:=");
scanf("%s",&employone.name);

printf("\n");

printf("Enter your Aeg:=");
scanf("%d",&employone.age);

printf("\n");

printf("Enter your salary:=");
scanf("%f",&employone.salary);
                                     // scond employ


  printf("Enter your second employ details\n");
printf("Enter your id:=");
scanf("%d",&employtwo.id);

printf("\n");

printf("Enter your name:=");
scanf("%s",&employtwo.name);

printf("\n");

printf("Enter your Aeg:=");
scanf("%d",&employtwo.age);

printf("\n");

printf("Enter your salary:=");
scanf("%f",&employtwo.salary);

                                     // third employ

                                       printf("Enter your second employ details\n");
printf("Enter your id:=");
scanf("%d",&employthree.id);

printf("\n");

printf("Enter your name:=");
scanf("%s",&employthree.name);

printf("\n");

printf("Enter your Aeg:=");
scanf("%d",&employthree.age);

printf("\n");

printf("Enter your salary:=");
scanf("%f",&employthree.salary);

printf("id\tname\tage\tsalary\n");
printf("%d\t%s\t%d\t%.2f\t\n",employone.id,employone.name,employone.age,employone.salary);
printf("%d\t%s\t%d\t%.2f\t\n",employtwo.id,employtwo.name,employtwo.age,employtwo.salary);
printf("%d\t%s\t%d\t%.2f\t\n",employthree.id,employthree.name,employthree.age,employthree.salary);
}