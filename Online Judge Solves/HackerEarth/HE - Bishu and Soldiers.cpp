#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,R,K,pow=0,in;
    cin>>N;
    vector<int>vc(N);
    vector<int>::iterator x;
    for(int i=0;i<N;i++)
    {
        cin>>vc[i];

    }
    sort(vc.begin(),vc.end());
    cin>>R;
    for(int i=0;i<R;i++)
    {
        cin>>K;
        x=lower_bound(vc.begin(),vc.end(),K+1);
        int te=x-vc.begin();
        for(int j=0;j<te;j++)
        {
            pow+=vc[j];
        }
        cout<<te<<" "<<pow<<endl;
        pow=0;
    }
}
