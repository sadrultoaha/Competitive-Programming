#include<bits/stdc++.h>
using namespace std;

int gc(int a, int b)
{
    if (a == 0)
        return b;
    return gc(b%a, a);
}
int main()
{
    int a,b,X;
    while(cin>>a>>b)
    {


                X=a-b;
                if(gc(X,b)==b && a!=b)
                {
                    cout<<X<<" "<<b<<endl;
                }
                else
                {
                    cout<<"-1"<<endl;
                }
    }



}
