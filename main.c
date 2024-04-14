#include <stdio.h>
#include <stdlib.h>
void reverseSentence();
void reverseSentence()
{
    int c;
    c= getchar();
    if( c != EOF)
    {
        reverseSentence();
        printf("%c",c);
    }
}

int main()
{
    reverseSentence();
    return 0;
}
