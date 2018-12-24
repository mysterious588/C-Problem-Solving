#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int output = -1;
    scanf("%d",&n);
int Arr[n];
for (int i = 0; i < n; i++)
{
    Arr[i] = i + 1;
}
//1 2 3 4
    for (int i = 0;i < n;i++)
{
Arr[Arr[i]] = i;
Arr[i] = Arr[i] + 1;
if (n% 2 != 0)
{
    printf("%d",output);
    break;
}
else
{
printf("%d ",Arr[i]);
}
}
}
