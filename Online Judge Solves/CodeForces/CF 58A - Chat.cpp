#include<bits/stdc++.h>
using namespace std; //58A
int main()
{
    string A;
    cin>>A;
    for(int i=0;i<A.size();i++)
    for(int j=i+1;j<A.size();j++)
    for(int k=j+1;k<A.size();k++)
    for(int l=k+1;l<A.size();l++)
    for(int m=l+1;m<A.size();m++)
    {
        if(A[i]=='h'&& A[j]=='e' && A[k]=='l' && A[l]=='l' && A[m]=='o'){cout<<"YES"<<endl;return 0;}

    }
    cout<<"NO"<<endl;
}
