#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *maiuscolo( char *stringa );
int main()
{
    char *s=(char*)malloc(sizeof(char)*50);
    strcpy(s,"Falling\0");
//    char s[20]="ciao\0";
    printf("\nFrase normale: %s di len: %d con puntatore: %p",s,strlen(s),s);
//    printf("Frase normale: %s",s);
    s=maiuscolo(s);
    printf("\nFrase maiuscola: %s",s);
    return 0;
    //piccole cose che non sono andate al primo tentativo
//    1. se non allochi non allochi
//    2. gli array sono autoallocati, ma non sono puntatori
//    4. si può utilizzare un puntatore come se fosse un'array
//       di caratteri, che a livello pratico è quasi
}
char *maiuscolo( char *stringa ){
    for(int i=0;i<strlen(stringa);i++)
        if(stringa[i]>='a'&&stringa[i]<='z')  stringa[i]=stringa[i]-32;
    return stringa;
}
