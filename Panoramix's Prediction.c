#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first;
    int second, j;

    scanf("%d%d",&first,&second);

   int prime ;
   int s;
   for (int i = first + 1;i <second + 10;i++)

{

for (s = 2; s<i; s++ ){
   if (i % s == 0){
        break;
    }}
    if (i == s){
     prime = i;
      break;
    }




}

    if (prime == second){
        printf("Yes");
    }
    else{
        printf("No %d",prime);
    }
}






