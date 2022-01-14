#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,A[100001],c=0,d=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(n==1){c=1;break;}
        if(A[i]!=A[i-1]&&A[0]!=0)c++;
        //if(c%2==0)d++;

    }
    cout<<c;
}
