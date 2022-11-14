#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[100008],N,sum=0;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<N;i++)
    {
        for(int j=1;j<N;j++)
        {
            if((A[i] ^ A[j]) > max(A[i],A[j])&& i<j)
            {
                sum+=max(A[i],A[j]);
            }
        }
    }
    cout<<endl<<sum;

}
