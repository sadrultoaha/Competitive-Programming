#include <iostream>
#include <list>
#include <stdio.h>
using namespace std;
int main()
{
    list<long long>Gv;
    list<long long>::iterator it;
    long long n,p,q,a,b;
    long long sum=0;
    freopen("In.txt","r",stdin);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        Gv.push_back(p);
    }
    cin>>q;
     for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        for(it=Gv.begin();it != Gv.end();++it)
        {
            if(*it>=a && *it <=b)
            {
                sum = sum + *it;
            }
        }
        cout<<sum<<endl;
        sum=0;

    }
}
