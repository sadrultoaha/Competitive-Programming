#include<bits/stdc++.h>
using namespace std;
int A[7],Sum=0,M=0;
bool ok=false;
int main()
{
    for(int i=0;i<6;i++)
    {
        cin>>A[i];Sum+=A[i];
    }

   for(int i=0;i<6;i++)
    for(int j=i+1;j<6;j++)
        for(int k=j+1;k<6;k++)
   {
       if((A[i]+A[j]+A[k])==double(Sum)/2){ok=true;break;}

   }
   if(ok)cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
}
