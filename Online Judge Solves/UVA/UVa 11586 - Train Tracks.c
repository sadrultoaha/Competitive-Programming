#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,f,m,len;
    int T;
    char Con[1000];
    scanf("%d",&T);
     getchar ();
    for(j=0;j<T;j++)
    {
        f=0;m=0;
        gets(Con);
        len=strlen(Con);
        for(i=0;i<=len;i++)
        {
            if(Con[i]=='F')
            {
                f++;
            }
            else if(Con[i]=='M') m++;
        }
    if(f==m && len>2)printf("LOOP\n");
    else printf("NO LOOP\n");
    }

 return 0;
}
