#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,tr,a[108],d,tm=86400,rem=0;

    cin>>n>>tr;
    rem+=tr;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]=tm-a[i];
        rem=rem-a[i];
        if(rem<=0){d=i;break;}

    }
    cout<<d<<endl;
}
