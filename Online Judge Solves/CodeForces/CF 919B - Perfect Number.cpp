#include<bits/stdc++.h>
using namespace std;

int get(int x)
{
    int res=0;
    while(x)
    {
        res+=x%10;
        x/=10;
    }
    return res;
}
int main()
{
    int n,ans=0;
    cin>>n;
    while(n)
    {
        ans++;
        if(get(ans)==10)n--;
    }
    cout<<ans<<"\n";
}
