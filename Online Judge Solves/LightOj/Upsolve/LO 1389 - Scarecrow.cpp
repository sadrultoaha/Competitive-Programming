#include<bits/stdc++.h>
using namespace std;
//WA
int main()
{
    freopen("IN.txt","r",stdin);
    int N,T,c=0,cs=1;
    cin>>T;
    string A;

    while(T--)
    {
        cin>>N;
        cin>>A;
        for(int i=0;i<N;i++)
        {
            if(A[i]=='#')
            {
                if((A[i+1]=='.') && (A[i-1]=='.'))
                {
                    c++;
                }
                else if(A[i-1]=='.')
                {
                    c++;
                }
                else if(A[i+1]=='.')
                {
                    c++;
                }
            }
        }
        cout<<"Case "<<cs<<": "<<c<<endl;
        c=0;
        cs++;
    }
}
