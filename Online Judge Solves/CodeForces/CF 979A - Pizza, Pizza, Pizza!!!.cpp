#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long N;
    cin>>N;
    if(N%2==0 && N!=0)  cout<<N+1;

    else if(N%2!=0) cout<<(N/2)+1;

    else cout<<N;
}
