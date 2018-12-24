#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("enter number of people then the time then the BG sequence \n");
int n;//number of people
int t;//time
int x;
scanf("%d %d",&n,&t);
char BG[n];//It will be one element bigger
gets(BG);
x = n;
while(t>0){
while (x > -1){
if (BG[n-x]=='B' && BG[n-x+1]=='G'){
     BG[n-x+1] = 'B';
     BG[n-x] = 'G';
}
        x--;
t--;
}}
puts(BG);
}
