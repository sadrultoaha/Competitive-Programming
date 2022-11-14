/**
    author: SadrulToaha
    status:
**/

#include<iostream>
#include<cstdio>
using namespace std;
#define IN freopen("IN.txt","r",stdin)
int findAns(int taka)
{
    int tx=0;
    taka-=180000;
    if(taka>=300000){tx+=((300000)/100)*10;}
     taka-=300000;
    if(taka>=400000){tx+=((400000)/100)*15;}
    taka-=400000;
    if(taka>=300000){tx+=((300000)/100)*20;}
    taka-=300000;
    if(taka>0)tx+=(taka/100)*25;

    if(tx<=2000)tx=2000;
    return tx;
}

int main()
{
    int T,cs=0,ans=0;
    cin>>T;
    while(T--)
    {
        cs++;
        int k;
        cin>>k;
        ans=findAns(k);
        printf("Case %d: %d\n",cs,ans);
        ans=0;
    }
return 0;
}

