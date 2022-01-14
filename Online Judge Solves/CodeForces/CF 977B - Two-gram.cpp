#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cn,mx=0;
    string S,res;
    cin>>n;
    cin>>S;

    for(int i=0;i<n-1;i++)
    {
        cn=0;
        for(int j=0;j<n-1;j++)
        {
            if(S[i]==S[j] && S[i+1]==S[j+1])
            {
                cn++;
            }
        }
        if(cn>mx){ mx=cn;
        res=string(1,S[i])+string(1,S[i+1]);}
    }
    cout<<res<<endl;
}
