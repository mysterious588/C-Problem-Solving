#include <stdio.h>
#include <stdlib.h>

int main(){
int matrix[5][5],i,j;
int one_row;
int one_column;
printf("Insert matrix\n");
for(i=0;i<5;i++)
  for(j=0;j<5;j++)
  {
    scanf("%d",&matrix[i][j]);
    if (matrix[i][j]==1){
       one_row=i;
       one_column=j;
    }
  }

int numberOfOperations = abs(one_row-2)+abs(one_column-2);
printf("number of operations are: %d",numberOfOperations);
}

