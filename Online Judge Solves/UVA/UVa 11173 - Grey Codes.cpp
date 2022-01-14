#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A,R,T,p;
    //freopen("Input.txt","r",stdin);
    cin>>T;
    while(T--)
        {
            cin>>n>>p;
            A =(floor(p/2));
            R = p^A;
            cout<<R<<" "<<endl;
        }
    return 0;
}
