#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[101],T=0,S=100,TH,SH,c=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>A[i];
        if(A[i]>T){T=A[i];TH=i;}
        if(A[i]<=S){S=A[i];SH=i;c++;}
    }
    if(SH<TH)cout<<(n-SH)+(TH-2);
    else  {if(c>1)SH-c; cout<<(n-SH)+(TH-1);}
    return 0;
}
