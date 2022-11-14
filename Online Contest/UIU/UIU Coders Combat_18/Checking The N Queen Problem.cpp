#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main() {
  //  freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,xarr[20010],yarr[20010],diarr1[40010],diarr2[40010];
    scanf("%d",&t);
    int i=1;
    while(i<=t)
    {
       int N;
       scanf("%d",&N);
       memset(xarr,0,sizeof(xarr));
       memset(yarr,0,sizeof(yarr));
       memset(diarr1,0,sizeof(diarr1));
       memset(diarr2,0,sizeof(diarr2));
       bool attack=false;
        for(int j=0;j<N;j++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            if(xarr[x]|| yarr[y]|| diarr1[N+y-x] || diarr2[x+y]){attack=true;continue;}
            xarr[x]=yarr[y]=diarr1[N+y-x]=diarr2[x+y]=1;
        }
        if(attack)printf("Case %d: No\n",i);
        else printf("Case %d: Yes\n",i);
        i++;
    }
    return 0;
}
