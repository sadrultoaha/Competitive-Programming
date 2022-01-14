#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[110],a=1,b=2;
    bool ok=true;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>A[i];

    for(int i=0;i<n;i++)
    {
        if(b==A[i])swap(a,b);
        if(a==A[i])
        {
            b=6-a-b;
        }
        else ok=false;
    }
    if(ok)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}
