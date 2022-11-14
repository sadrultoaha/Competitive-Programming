#include<bits/stdc++.h>
using namespace std;
// GoodLuck 'Berlandesk' :)

int main()
{
    int t=0;
    int n;
    string A;
    map<string,int>St;
    freopen("Input.txt","r",stdin);
    cin>>n;
    while(n--)
    {
        cin>>A;
        if(St[A])
        {
            t=1;
        }
        if(t==1)
        {
            cout<<A<<St[A]<<endl;
        }
        else cout<<"OK"<<endl;
        St[A]=St[A]+1;
        t=0;
    }

}
