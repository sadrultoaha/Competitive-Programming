#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    string A;
    cin>>n;
    while(n--)
    {
        cin>>A;
        if(A=="++X"||A=="X++")x++;
        else x--;
    }
    cout<<x;
}
