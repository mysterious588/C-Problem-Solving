#include <stdio.h>
#include <stdlib.h>

int main()
{
char word[10];
gets(word);
char firstLetter = word[0];
if (firstLetter>='a' && firstLetter<='z'){
    firstLetter -=32;//ASCII small letters are 32 bigger than capital ones
    word[0]=firstLetter;
    puts(word);

}
else{    printf(word);
}
}
//Men Fe Microsoft now
