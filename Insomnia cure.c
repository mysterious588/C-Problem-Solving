#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k ,l ,m ,n ,d ,i ,output;
    scanf("%d%d%d%d%d",&k ,&l ,&m ,&n ,&d);
    i=0;
    output = d;
    printf("%d \n",output);
    while (i<d){
i++;
if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0){
        output--;
    printf("%d \t %d \n",output,i);

}
}
printf("%d \n",(d-output));
return 0;
}
