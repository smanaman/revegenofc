#include<stdio.h>
int main(){
int row,col;
 int  max;


 printf("Enter your number i find out your nagtive number number is  ");
 scanf("%d",&row);
 printf("Enter your number i find out your nagtive number number is  ");
 scanf("%d",&col);
 int arr[row][col];

  printf("\nEnter array's elements:\n");
    for(int i = 0; i < row; i++) {
         for(int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
  printf("\nEnter array's elements:\n");
  max=arr[0][0];
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
        if(max<arr[i][j]){
            max=arr[i][j];
        }
}
    }
    printf("%d",max);
}