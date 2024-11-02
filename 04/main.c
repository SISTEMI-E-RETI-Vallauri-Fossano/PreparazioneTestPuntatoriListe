#include <stdio.h>
#include <stdlib.h>

 int lung_stringa( char *s );
int main()
{
    char *s=(char*)malloc(sizeof(char)*50);
    printf("Scrivere una frase: ");
    fflush(stdin);
//    gets(s);
    fgets(s,50,stdin);
    s[strlen(s)-1]='\0';
    printf("\nEcco la lunghezza della stringa: %d",lung_stringa(s));
    return 0;
}
 int lung_stringa( char *s ){
    int n=0;
    while(s[n]!='\0')
    {
        printf("/%c char",s[n]);
        n++;

    }

    return n;
 }
