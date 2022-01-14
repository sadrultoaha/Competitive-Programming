//CF 451A - Game With Sticks SOLVED
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,I,S,c=0;
    cin>>n>>m;
    I=n*m;
    while(I>0)
    {
        S=n+m;
        I-=(S-1);
        c++;
        n--;m--;

    }
    if(c%2==0)cout<<"Malvika";
    else cout<<"Akshat";
}
