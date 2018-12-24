#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N ;
    int first;
    int second;
scanf("%d%d",&n,&m);


int nextPrime (int m){
    int prime ;
    int s = n + 1;
for (int b = n; b < s; b++){
    if(m % b != 0){
         prime = b;

         break;
         }
         else{s++;}
}
return prime;
         printf("%d",b);

}



N = nextPrime(first);
printf("%d",N);
if(second == N){
    printf("Yes");
}
else{printf("No");}
}
