#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,I;
    cin>>n;
    I=(n-1);
    for(int i=1;i<=(n*4);i+=I)
    {
        if(i%n==0 || i==1) c++;
        cout<<c<<endl;
    }
    if(c%2==0) cout<<"yes"<<endl;
    else cout<<"NO"<<endl;
}
