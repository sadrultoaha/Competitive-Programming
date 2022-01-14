#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    char a[101];
    int cnt=0;
    cin>>A;
    for(int i=0,j=0;i<A.size();i++,j+=2)
    {
        if((A[j]=='1')||(A[j]=='2')||(A[j]=='3')){a[i]=A[j];cnt++;}
    }
    sort(a,a+cnt);
    for(int j=0;j<cnt;j++)
    {

        cout<<a[j];
        if(j!=cnt-1) cout<<"+";
    }
}
