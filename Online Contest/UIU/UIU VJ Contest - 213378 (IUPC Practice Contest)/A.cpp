#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    map<int,int>::iterator it;
    int N,M,A,B,C[100001],S=0,T=0;
    cin>>N>>M;
    for(int i=1;i<=M;i++)
    {
        cin>>A>>B;
        mp[A]++;
    }
    for(int i=1;i<=N;i++)
    {
        cin>>C[i];
    }
    for(it=mp.begin();it!=mp.end();it++)
    {

        if(C[it->first]>=0)
        {
           if(it->second>1)
            {
           S+=C[it->first];
            }
        }
        else {T++;}

    }

    if(T>0 && T<=mp[A] || mp[A]<=1){S=-1;}
    cout<<S;


}
