#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,L,E,c=0;
    cin>>n;

    for(int i=1;i<=n;i++)
    {   if(i==1)c++;
        if(i!= 1 && i!=(n-1) && i!=n)
        {
            L=n-i;
            if(L%i==0)c++;
        }
    }
    cout<<c;
}
