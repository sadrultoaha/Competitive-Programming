//CF 136A - Presents Solved
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p[101],A[101];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p[i];
    }

      for(int j=1;j<=n;j++)
    {
        for(int k=1;k<=n;k++)
        {
            if(p[k]==j )cout<<k<<" ";
        }

    }

}
