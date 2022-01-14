#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,h,m;
    cin>>t>>h>>m;
    int i=0;
    int tm=h*60+m;
    while(1)
    {
        h=tm/60;m=tm%60;
        if(h/10==7||h%10==7||m/10==7||m%10==7)
        {
            cout<<i<<endl;
            return 0;
        }
        i++;
        tm=(tm-t+1440)%1440;
    }
}
