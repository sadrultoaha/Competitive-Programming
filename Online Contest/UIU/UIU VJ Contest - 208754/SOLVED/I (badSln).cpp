#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>st;
    map<int,int>::iterator it;
    int x,cnt=0,l;
    int An=0,B=0,E=0;

    for(int i=0;i<6;i++){ cin>>x; st[x]++;}
    for(it=st.begin();it!=st.end();it++)
    {
             if(it->second==4)
             {
                 l=it->first;An=1;
             }
             else if(it->second==6) E=1;
             else if(it->second==5) B=1;
             if(it->first!=l) cnt++;
    }

    if(An==1 && cnt==1 ||E==1) cout<<"Elephant";
    else if(An==1 && cnt==2 || B==1) cout<<"Bear";
    else if(An==0) cout<<"Alien";

}
