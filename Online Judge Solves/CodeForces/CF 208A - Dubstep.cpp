//CF 208A - Dubstep SOLVED
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A;
    int c=0;
    cin>>A;
    for(int i=0;i<A.size();i++)
    {
        c++;
        if(A[i]=='W'&& A[i+1]=='U'&& A[i+2]=='B') {if(c!=1)A.insert(i+3,1,' ');A.erase(i,3);i=-1;}

    }
    cout<<A;

}
