#include<bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    double h,u,d,f,clmb;
    bool S;
    while(cin>>h>>u>>d>>f){

        if(h==0)break;
        day=0;
        clmb=0;
        f=u*f/100;
    while(1)
        {
            day++;
            if(u>=0) clmb+=u;
            u-=f;
            if(clmb>h){S=true;break;}
            clmb-=d;
            if(clmb<0){S=false;break;}
        }
        if(S) cout<<"success";
        else cout<<"failure";
        cout<<" on day "<<day<<endl;
        }

}
