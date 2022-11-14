#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,time[108],mn=1e9,mx=0,YI,OI;
    int d,m,y;
    string NM,NA[108];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>NM>>d>>m>>y;
        time[i]=d+m*30+y*365;
        NA[i]=NM;
        if(time[i]>mx){mx=time[i];YI=i;}
        if(time[i]<mn){mn=time[i];OI=i;}
    }
    for(int i=0;i<n;i++)
    {
        if(i==YI)cout<<NA[i]<<endl;
        if(i==OI){cout<<NA[i]<<endl;
        return 0;}
    }
}
