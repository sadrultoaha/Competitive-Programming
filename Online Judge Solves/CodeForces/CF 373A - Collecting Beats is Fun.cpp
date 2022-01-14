#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[5];
    int k,ok=0;
    map<char,int>mp;
    map<char,int>::iterator it;
    cin>>k;

    for(int i=0;i<4;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            mp[s[i][j]]++;
        }
    }
    for(it=mp.begin();it!=mp.end();it++)
    {
        if(it->first>=49 && it->first<=57 ) if(it->second >2*k){ok=1;break;}
    }
    if(ok==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
