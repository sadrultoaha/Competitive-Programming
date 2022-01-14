
#include<cstdio>
#include<cstring>

int ram[10],rom[1000];
int main()
{
    int t;
    char x,y;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--)
    {
        int ans=0;
        memset(ram,0,sizeof(ram));
        memset(rom,0,sizeof(rom));
        char c[4];
        int pc=0;
        while((c[0]=getchar())!=NULL)
        {
            if(c[0]<'0')break;
            c[1]=getchar();
            c[2]=getchar();
            c[3]=getchar();
            rom[pc] = (((c[0]-'0')*100) + ((c[1]-'0')*10) + (c[2]-'0'));
            pc++;
        }
        int i=0;
        while(1)
        {
            ans++;
            if(rom[i]==100)break;
            int q = rom[i]/100;
            int d=(rom[i]%100)/10;
            int s=rom[i]%10;

            if(q==2)ram[d]=s;
            else if(q==3)ram[d]+=s;
            else if(q==4)ram[d]*=s;
            else if(q==5)ram[d]=ram[s];
            else if(q==6)ram[d]+=ram[s];
            else if(q==7)ram[d]*=ram[s];
            else if(q==8)ram[d]=rom[ram[s]];
            else if(q==9)rom[ram[s]]=ram[d];
            else if(q==0)if(ram[s]!=0)i=ram[d]-1;
            i++;
            ram[d]%=1000;


        }
        printf("%d\n",ans);
        if(t)printf("\n");


    }
}

