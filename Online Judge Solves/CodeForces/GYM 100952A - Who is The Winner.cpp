#include<bits/stdc++.h>
using namespace std;

int main()
{
   int T,H1,H2,M1,M2,S1,S2,T1,T2;
   cin>>T;
   while(T--)
   {
       cin>>H1>>M1>>S1>>H2>>M2>>S2;
       T1=H1*3600+M1*60+S1;
       T2=H2*3600+M2*60+S2;
       if(T1<T2)
       {
           cout<<"Player1"<<endl;
       }
       else if(T2<T1)
       {
           cout<<"Player2"<<endl;
       }
       else
       {
           cout<<"Tie"<<endl;
       }
   }
}
