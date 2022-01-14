#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0;
    string A;
    cin>>n;
    cin>>A;
    for(int i=0;i<n;i++)
    {
            if(A[i]==A[i+1]){ cnt++;}
    }
    cout<<cnt;
}
