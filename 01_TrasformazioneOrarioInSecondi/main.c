#include <stdio.h>
#include <stdlib.h>

void split_time ( long int tot_sec, int *h, int *m,int *s );
int main()
{
    int *h,*m,*s;
    h=(int*)malloc(sizeof(int));
    m=(int*)malloc(sizeof(int));
    s=(int*)malloc(sizeof(int));

    long int secs;
    printf("Inserire i secondi: ");
    scanf("%d",&secs);
    split_time(secs,h,m,s);

    printf("\n\nOra: %d, Minuti: %d, Secondi: %d",*h,*m,*s);
    return 0;
}
void split_time ( long int tot_sec, int *h, int *m,int *s ){
    *h=tot_sec/3600;
    tot_sec=tot_sec%3600;
    *m=tot_sec/60;
    tot_sec=tot_sec%60;
    *s=tot_sec;
}
