#include<string.h>
#include<stdio.h>

int main()
{
    int Length,i;
    char str[100];

    gets(str);
    Length=strlen(str);

    for(i=0;i<Length;i++)
    {

        if((str[i]!='A')&& (str[i]!='O')&&(str[i]!='Y')&&(str[i]!='E')&&(str[i]!='U')&&(str[i]!='I')&&(str[i]!='a')&&(str[i]!='o')&&(str[i]!='y')&&(str[i]!='e')&&(str[i]!='u')&&(str[i]!='i'))
        {
            str[i]=tolower(str[i]);
          printf(".%c",str[i]);

        }

    }


    return 0;

}