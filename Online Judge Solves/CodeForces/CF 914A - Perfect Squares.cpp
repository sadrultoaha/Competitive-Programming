#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[1009];
    int n,max=-1000002,mx=-1000001;
    double X;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        X=A[i];
        if(floor(sqrt(X))!=sqrt(A[i])){max=A[i];}
        if(max>mx)mx=max;
    }
    cout<<mx<<endl;
    return 0;

}
