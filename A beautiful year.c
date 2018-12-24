#include <stdio.h>
#include <stdlib.h>
 char year[3];
 static int firstNum;
 static int secondNum;
 static int thirdNum;
 static int fourthNum;
int main()
{

    gets(year);
    firstNum = year[0] - 48;
    secondNum = year[1] - 48;
    thirdNum = year[2] -48;
    fourthNum = year[3] -48;
    checker();
    while(firstNum == secondNum||firstNum == thirdNum || firstNum == fourthNum ||secondNum == thirdNum ||secondNum == fourthNum || thirdNum == fourthNum){
        checker();
    }
    printf("%d%d%d%d\n",firstNum,secondNum,thirdNum,fourthNum);

}
void checker(){
if (fourthNum == 9){
    fourthNum = 0;
    if (thirdNum == 9){
        thirdNum = 0;
        if (secondNum == 9){
            secondNum = 0;
            firstNum ++;
        }
        else{
            secondNum++;
        }
    }
    else{
    thirdNum++;
    }
}
else{fourthNum++;}
}

