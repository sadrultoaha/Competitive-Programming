#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    int fl=0;
    cin>>A;

    for(int i=0;i<A.size();i++)
    {
        if(A[i]>=33 && A[i]<=126){
        if(A[i]=='H' || A[i]=='Q' || A[i]=='9' || (A[i]=='+' && A[i+2]>64 && A[i+1]!=0 )) {fl=1;break;}
        else fl=0;
        }
        else break;
    }
    if(fl)cout<<"YES";
    else cout<<"NO";

}
