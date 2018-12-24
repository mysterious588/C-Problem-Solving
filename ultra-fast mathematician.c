#include <stdio.h>
#include <stdlib.h>

int main()
{
char input1 [100];
char input2[100];
char output[100];
scanf("%s",&input1);
scanf("%s",&input2);
for (int i = 0; i <(int)sizeof(input1);i++)
{
 int a = input1[i];
    if ( a  ==  49 || a == 48 )
    {
    }
    else{break;}
 if (input1[i] == input2[i]){
    output[i] = '0';
 }
 else {
    output [i] = '1';
 }

}
puts(output);
}//It could have been done by xor but I'm lazy af

