#include<stdio.h>
enum month{
    
 January,
 February,
 March,
 April, 
 May, 
 June,
 July,
 August,
 September,
 October,
 November,
 December
};
int main(){
 enum month today;
 today=April;
switch (today)
{


case January:
printf("this mont is january");
    break;

    case February:
printf("this mont is February");
    break;

    case March:
printf("this mont is  March");
    break;

    case April:
printf("this mont is  april ");
    break;

    case May:
printf("this mont is may");
    break;

    case June:
printf("this mont is june");
    break;

    case July:
printf("this mont is july");
    break;

    case August:
printf("this mont is august");
    break;

    case September:
printf("this mont is september");
    break;

  case October:
printf("this mont is october");
    break;

  case November:
printf("this mont is november");
    break;

      case December:
printf("this mont is december");
    break;
}

}