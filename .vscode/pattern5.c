// Write a Program to print the below pattern using nested for loop.
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5

#include<stdio.h>

int main(){
for(int row=1;row<=5;row++){
    for(int col=row;col<=5;col++){
        printf("%d ",row);
    }
    printf("\n");
}



}