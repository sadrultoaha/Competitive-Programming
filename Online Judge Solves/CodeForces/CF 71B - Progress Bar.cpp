#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,n,k,t,b;
    cin>>n>>k>>t;

    a=floor((n*k*t)/100);
    b=floor(a/k);
    for(int i=1;i<=n;i++)
    {
        if(i<(b+1))
        {
            cout<<k<<" ";
        }
        else if(i==(b+1))
        {
            cout<<(a-(b*k))<<" ";
        }
        else cout<<"0"<<" ";
    }
    cout<<endl;

}
