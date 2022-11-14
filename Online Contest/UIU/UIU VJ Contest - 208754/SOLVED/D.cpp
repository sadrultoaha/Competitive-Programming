#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> tq;
    int a,b,n,maX=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        while(a--)
            tq.pop();

        while(b--)
            tq.push(0);

        if(tq.size()>maX) maX=tq.size();
    }
    cout<<maX<<endl;

    return 0;
}
