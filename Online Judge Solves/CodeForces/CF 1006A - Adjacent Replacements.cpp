#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,A[1008];
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        cin>>A[i];
        if(A[i]%2==0)
        {
            A[i]--;
        }
    }
    for(int i=1;i<=N;i++)
    {
       cout<<A[i]<<" ";
    }


}
