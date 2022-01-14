#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[101],e=0,o=0;;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]%2==0)e++;
        else o++;
    }
    for(int i=1;i<=n;i++)
    {
        if(e>o){if(A[i]%2!=0)cout<<i;}
        else{if(A[i]%2==0)cout<<i;}
    }
}
