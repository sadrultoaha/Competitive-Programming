#include<bits/stdc++.h>
using namespace std;

int main()
{
     int n,b[101],ans=0,a[101];
     cin>>n;
     for(int i=1;i<n;i++){cin>>b[i];a[i]=b[i];}
     b[0]=a[0]=b[1];
     for(int i=n-1;i>1;i--)
     {
          if(b[i]<b[i-1])
          {a[i-1]=b[i];}
     }
     for(int i=0;i<n;i++)ans+=a[i];
     cout<<ans<<"\n";
}

