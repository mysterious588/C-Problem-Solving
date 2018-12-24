#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int sum ;
double drinksNumber;
int a;
scanf("%lf",&drinksNumber);
a = drinksNumber;
double drinks[a];
void add(double djaja)
{
    sum += djaja;
}
for ( int i = 0 ;i < a ; i++ )
{
    scanf("%lf",&drinks[i]);
    add(drinks[i]);
}
    printf("%lf", sum/drinksNumber);//that's it???

}
