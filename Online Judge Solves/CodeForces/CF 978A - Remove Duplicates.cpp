#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>st;
    int n,A[1007],B[1007],c=0;
    cin>>n;
    for(int i=0;i<n;i++) cin>>A[i];
    reverse(A,A+n);
    for(int i=0;i<n;i++)
    {
        st[A[i]]++;
        if(st[A[i]]==1){ B[c]=A[i];c++;}
    }
    reverse(B,B+c);
    cout<<c<<endl;
    for(int j=0;j<c;j++)
    {
        cout<<B[j]<<" ";
    }
}
