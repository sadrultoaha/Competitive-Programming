#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string S;
    cin>>n;
    cin>>S;

    for(int i=0;i<n-1;i++)
    {
        if(S[i]=='1')
        {
            if(S[i+1]=='1')
            {
                cout<<"No";
                return 0;
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        if(S[j]=='0')
        {
            if((S[j+1]=='0' || j==n-1) && (S[j-1]=='0' || j==0))
            {
               cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";

}
