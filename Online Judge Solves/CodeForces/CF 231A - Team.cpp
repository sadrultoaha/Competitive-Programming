#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,petaya,vasya,tonya,sum=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        cin>>petaya>>vasya>>tonya;
        sum=petaya+vasya+tonya;
        if(sum>=2)cnt++;
        sum=0;
    }
    cout<<cnt;
}
