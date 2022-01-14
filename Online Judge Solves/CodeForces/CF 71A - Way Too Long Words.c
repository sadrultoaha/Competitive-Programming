#include<string.h>
#include<stdio.h>
int main()
{
    char abr[1000];
    int T,i,len,C=0;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        gets(abr);
        len=strlen(abr);
        for(i=1;i<len-1;i++)
        {
            C++;
        }
        if(C>8)
        {
            fflush(stdout);
            printf("%c%d%c\n",abr[0],C,abr[len-1]);
            C=0;

        }
        else
        {
             fflush(stdout);
                puts(abr);
                 C=0;
        }

    }
    return 0;
}
