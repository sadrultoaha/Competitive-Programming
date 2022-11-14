#include<bits/stdc++.h>
using namespace std;
int XR(int S[],int M)
{
    int A=0;
    for(int i=0;i<M;i++)
    {
        A^=S[i];
    }
    return A;

}
int main()
{
    int T,M,S[100008],c=0;

    cin>>T;
    while(T--)
    {
        cin>>M;
        for(int i=0;i<M;i++)
        {
            cin>>S[i];
        }
        int j=0;
        while(XR(S,M)==0)
        {
            if(j>=M) break;
            if(S[j]>0)
            {
                S[j]-=1;
                c++;
            }
            else
            {
                j++;
                M--;
            }
        }
        cout<<c<<endl;
        c=0;

    }

}
