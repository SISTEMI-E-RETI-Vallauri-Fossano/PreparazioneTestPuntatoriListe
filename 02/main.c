#include <stdio.h>
#include <stdlib.h>

void scambia( int *p, int *q );
int main()
{
    printf("Esercizio n.02 - SWITCH valori");
    int a =10,b=5;
    printf("\na: %d - b: %d",a,b);
    scambia(&a,&b);
    printf("\na: %d - b: %d",a,b);
    return 0;
}

void scambia( int *p, int *q )
{
    int a=*p;
    *p=*q;
    *q=a;
}
