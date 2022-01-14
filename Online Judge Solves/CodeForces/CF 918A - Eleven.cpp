#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,fibbN,t1,t2,F=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fibbN=0;
        t1 = 0 ;t2 = 1;
        for(int j=1;j<=i;j++)
        {
            fibbN = t1 + t2;
            t1 = t2;
            t2 = fibbN;
            if(i==fibbN ) { cout<<"O";F=1;break;}
            else F=0;
        }
        if(F==0)cout<<"o";
    }
    cout<<endl;
}

