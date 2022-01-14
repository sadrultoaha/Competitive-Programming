#include<bits/stdc++.h>
using namespace std;
int LovelyOrNot(string A)
{
    string T;
    int cnt=0;
    for(int I=0;I<A.size();I++)
    {
        if(A[I]=='c'|| A[I]=='h'||A[I]=='e'||A[I]=='f') T=A.substr(I,4);
         sort(T.begin(),T.end());
        if(T=="cefh")cnt++;
    }

    return cnt;

}
int main()
{
    string S;
    int N,R=0;
    cin>>N;
    while(N--){
    cin>>S;
    R=LovelyOrNot(S);
    if(R>=1)cout<<"lovely "<<R<<endl;
    else cout<<"normal"<<endl;
    R=0;
    }
    return 0;
}
