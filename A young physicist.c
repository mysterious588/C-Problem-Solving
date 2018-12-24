#include <stdio.h>
#include <stdlib.h>

int main()
{
int matrix[3][3],i,j;
for (i=0;i<3;i++)
  for  (j=0;j<3;j++)
{
    scanf("%d",&matrix[i][j]);

}
int first_rowSum = matrix[0][0]+matrix[1][0]+matrix[2][0];
int second_rowSum = matrix[0][1]+matrix[1][1]+matrix[2][1];
int third_rowSum = matrix[0][2]+matrix[1][2]+matrix[2][2];
if (first_rowSum == 0 &&second_rowSum == 0 && third_rowSum==0){
    printf("Yes");
}
else{
    printf("No");
}
}
