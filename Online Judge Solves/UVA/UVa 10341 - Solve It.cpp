/**
SunWalker
**/
#include<bits/stdc++.h>
#define EPS 1e-9
using namespace std;
int  p,q,r,s,t,u;
double bs()
{
    double lo=0,hi=1,x,eq;
    while(lo+EPS<hi)
    {
        x=(hi+lo)/2.0;
        eq=p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*pow(x,2);
        if(eq>(-u)){lo=x;}
        else hi=x;
    }
    return x;
}
int main()
{
    //freopen("IN.txt","r",stdin);
    while(cin>>p>>q>>r>>s>>t>>u)
    {
        double ans=bs(),x,eq0,eq1;
        x=0;eq0=p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*pow(x,2)+u;
        x=1;eq1=p*exp(-x)+q*sin(x)+r*cos(x)+s*tan(x)+t*pow(x,2)+u;
        if(eq0*eq1>0)cout<<"No solution\n";
        else printf("%0.4f\n",ans);
    }
}
