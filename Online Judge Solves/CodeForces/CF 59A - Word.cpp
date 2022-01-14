#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    int u=0,l=0;
    char x;
    cin>>A;
    for(int i=0;i<A.size();i++)
    {
        x=A[i];
        if(x==toupper(x)){u++;}
        if(x==tolower(x)){l++;}
    }
    for(int i=0;i<A.size();i++)
    {
        if(u==l ||l>u){A[i]=tolower(A[i]);cout<<A[i];}
        else if(u>l){A[i]=toupper(A[i]);cout<<A[i];}
    }
}
