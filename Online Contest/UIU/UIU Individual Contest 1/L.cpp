#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,E,O;
    cin>>T;
    while(T--)
    {
        cin>>N;
        E=N/2;
        O=N-E;
        cout<<O<<" "<<E<<endl;
    }
}
