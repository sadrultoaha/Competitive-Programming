#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,A[5],j=0,S[5000];
    //freopen("IN.txt","r",stdin);
    cin>>N;
    while(N--)
    {
        for(int i=0;i<5;i++)cin>>A[i];
        S[j]=A[0]+A[1]+A[2]+A[3]+A[4];

        if(S[j]==0)cout<<"Beginner"<<endl;
        else if(S[j]==1)cout<<"Junior Developer"<<endl;
        else if(S[j]==2)cout<<"Middle Developer"<<endl;
        else if(S[j]==3)cout<<"Senior Developer"<<endl;
        else if(S[j]==4)cout<<"Hacker"<<endl;
        else if(S[j]==5)cout<<"Jeff Dean"<<endl;
    }
}
