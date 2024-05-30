#include<stdio.h>
#include<string.h>
float calculate_percentage(int total,int number_subject){
    return(float)total/number_subject; // percentage of total marks
}

int main(){
char name[100]; // user name
char subject[4][10]={"Math","Hindi","GK","Science"};  // Subject list
int number_subject=4; // number of subjects
int mark[50]; // user input marks
int total=0; // Total sum of marks
float percentage; // percentage of marks

printf("Enter your name=>"); // Ask user to Enter name

scanf("%[^\n]s",&name); // input your name and assign to name variable

printf("Your name is : %s\n",name); // User will see his name on screen.


for (int i = 0; i<4; i++)
{

    printf("Subject : %s\n ",subject[i]); // print subject list

    scanf("%d",&mark[i]); // assign marks into mark variable

    total += mark[i]; // add marks to total

}


percentage = calculate_percentage(total,number_subject); // assign total and number of subject

printf("Your percentage is :  %.2f",percentage); // show user his percentage


}