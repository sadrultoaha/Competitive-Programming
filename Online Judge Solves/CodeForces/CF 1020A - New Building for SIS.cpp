#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,a,b,k,T1,F1,T2,F2;

    cin>>n>>h>>a>>b>>k;
    for(int i=1;i<=k;i++)
    {

        cin>>T1>>F1>>T2>>F2;
        int cur=0;
        if((a<=F1)&&(F1<=b)) cur = abs(F1-F2)+abs(T1-T2);
        else
        {   if(T1==T2)
            {
               cur=abs(F1-F2);
            }
            else
            {
              if(abs(a-F1)<abs(b-F1))cur=abs(T1-T2)+abs(a-F1)+abs(a-F2);
              else cur=abs(T1-T2)+abs(b-F1)+abs(b-F2);
            }
        }
        cout<<cur<<endl;
    }

}
