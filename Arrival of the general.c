#include <stdio.h>
#include <stdlib.h>

int main()
{
int time = 0;
int smallestIndex;
int BiggestIndex;
int Biggest;
int smallest;
    int n;
scanf("%d",&n);
int Arr[n];
for (int i = 0; i < n; i++)
{
scanf("%d",&Arr[i]);
}
Biggest = Arr[0];
smallest = Arr[0];
int i = 0;
for( i = 0;i < n; i++)
{
    if (Arr[i]>Biggest)
        {
            Biggest = Arr[i];
            printf("%d\n",i);
            BiggestIndex = i;
        }
            if (Arr[i]<=smallest)
        {
            smallest = Arr[i];
            smallestIndex = i;
        }
}
printf("Biggest \t index \n %d \t\t %d \n smallest \t index \n %d \t\t %d \n",Biggest,BiggestIndex,smallest,smallestIndex);

time = BiggestIndex + (n - 1 - smallestIndex);
if (BiggestIndex > smallestIndex){time--;}
printf("time is %d",time);
}
