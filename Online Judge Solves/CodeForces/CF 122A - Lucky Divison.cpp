//122A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,A[1000],i=0,L=0,N;
    cin>>n;
    N=n;
    while(N>0)
    {
        A[i] = N%10;
        N/=10;
        if(A[i]==7 || A[i]==4) L=1;
        else {L=0; break;}
        i++;
    }
    if((n%4==0) || (n%7==0) || (n%47==0) || (n%74==0)) L=1;

    if(L==1)cout<<"YES";
    else cout<<"NO";

}
