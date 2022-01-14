#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1000001],c[1000001],t,k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    {
        if(j==0)c[k]=1;
        if(a[j+1]>=a[j])c[k]++;

        else if(a[j+1]<a[j]){k++;c[k]++;}
    }
        sort(c,c+k,greater<int>());
    cout<<c[0];

}
