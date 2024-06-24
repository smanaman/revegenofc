#include<stdio.h>
#include<string.h>
 struct car
 { int id;
  char name[128];
 char color[128];
  float price;
 }supra,royal,Lambo;

int main(){
supra.id=1;
strcpy(supra.name,"supraaaa");
strcpy(supra.color,"black");
supra.price=13000000;

// printf("car no.%d \n",supra.id);
// printf("car name:=%s \n",supra.name);
// printf("car color:=%s \n",supra.color);
// printf("car price:=%f \n",supra.price);
// printf("ratatata rata rata");


royal.id=2;
strcpy(royal.name,"rolls_royal");
strcpy(royal.color,"black");
royal.price=10000.0;

// printf("car no.%d \n",royal.id);
// printf("car name:=%s \n",royal.name);
// printf("car color:=%s \n",royal.color);
// printf("car price:=%f \n",royal.price);
// printf("ratatata rata rata");

Lambo.id=3;
strcpy(Lambo.name,"Lamborghini");
strcpy(Lambo.color,"black");
Lambo.price=1300000;
// printf("car no.%d \n",Lambo.id);
// printf("car name:=%s \n",Lambo.name);
// printf("car color:=%s \n",Lambo.color);
// printf("car price:=%f \n",Lambo.price);
// printf("ratatata rata rata");
printf("--------------------------------------------------------------------------\n");
printf("|id\t|\tname\t\t|\tcolor\t|\tprice\t\t|\n");
printf("--------------------------------------------------------------------------\n");
printf("|%d\t|\t%s\t|\t%s\t|\t%.2f\t|\n",supra.id,supra.name,supra.color,supra.price);
printf("--------------------------------------------------------------------------\n");
printf("|%d\t|\t%s\t|\t%s\t|\t%.2f\t|\n",royal.id,royal.name,royal.color,royal.price);
printf("--------------------------------------------------------------------------\n");
printf("|%d\t|\t%s\t|\t%s\t|\t%.2f\t|\n",Lambo.id,Lambo.name,Lambo.color,Lambo.price);
printf("--------------------------------------------------------------------------\n");
}