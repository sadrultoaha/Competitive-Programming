#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A,ANS;
    int len,mx=0;
    while(cin>>A)
    {
        len=0;
        if(A=="E-N-D")break;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]>=65 && A[i]<=90 || A[i]>=97 && A[i]<=122 || A[i]==45){
            len++;}
        }

        if(len>mx)
        {
            mx=len;
            ANS=A;
        }
    }
    for(int i=0;i<ANS.size();i++)
    {
        if(ANS[i]>=65 && ANS[i]<=90 || ANS[i]>=97 && ANS[i]<=122 || ANS[i]==45)
        {
            ANS[i]=tolower(ANS[i]);
            cout<<ANS[i];
        }
    }
    cout<<endl;
}
