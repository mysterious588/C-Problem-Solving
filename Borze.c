#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char input[100];
gets(input);
int inputLength = strlen(input);//get the length of the array
int x = inputLength - 1;
while ( x > -1){
    if ( input[x] == '-' && input[x-1] == '-' ){
        printf("2");
        x-=2;
    }
    else if (input[x] == '.' && input[x-1] == '-'){
printf("1");
         x-=2;

    }
    else {
        printf("0");
        x--;
    }

}
}
