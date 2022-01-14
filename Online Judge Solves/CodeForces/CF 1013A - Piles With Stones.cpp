#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,A[100],B[100],S1=0,S2=0;

    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
        S1+=A[i];
    }

    for(int j=0;j<N;j++)
    {
            cin>>B[j];
            S2+=B[j];
    }





    if(S1<S2) cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
