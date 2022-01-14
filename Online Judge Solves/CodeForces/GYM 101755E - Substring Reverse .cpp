#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A,B,X;
    int cq=0;
    int i1=-1,i2=-1;
    cin>>A>>B;
    X=A;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=B[i])
        {
            i1=i;
            break;
        }
    }
    for(int i=A.size()-1;i>=0;i--)
    {
        if(A[i]!=B[i])
        {
            i2=i;
            break;
        }
    }
    if(A==B)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        int k=i2;
    for(int j=i1;j<=i2;j++)
    {

            if(A[j]==B[k])
            {
                cq=1;
            }
            else
            {
                cq=0;
                break;
            }
            k--;
    }
    if(cq==1)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}
