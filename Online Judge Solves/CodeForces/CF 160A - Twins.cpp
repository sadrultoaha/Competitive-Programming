#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,C[100],S=0,T=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>C[i];
        T+=C[i];
    }
    sort(C,C+n,greater<int>());

       for(int k=0;T>=S;k++)
        {
            T-=C[k];
            S+=C[k];
            cnt++;

        }

     cout<<cnt;

}
