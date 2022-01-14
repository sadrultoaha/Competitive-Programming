/**[By Code Help Solve]*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,sumTime,minT=0,maxT=0,T1[50],T2[50];
    cin>>d>>sumTime;
    for(int i=0;i<d;i++)
    {
        cin>>T1[i]>>T2[i];
        minT=minT+T1[i];
        maxT=maxT+T2[i];
    }
    if(minT<=sumTime && sumTime<=maxT)
    {
        cout<<"YES"<<endl;
            for(int k=0;k<d;k++)
            {
                cout<<min(T2[k],sumTime-minT+T1[k])<<" ";
                sumTime-= min(T2[k],sumTime-minT+T1[k]);
                minT-= T1[k];
            }
    }
    else cout<<"NO"; return 0;
}
