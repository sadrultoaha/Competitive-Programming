#include<bits/stdc++.h>
using namespace std;

int main()
{
    int board,Qr,Qc,Kr,Kc,Tr,Tc;

    cin>>board>>Qc>>Qr>>Kc>>Kr>>Tc>>Tr;

         if(Tc<Qc && Tr<Qr && Kc<Qc && Kr<Qr)cout<<"YES"<<endl;
    else if(Tc>Qc && Tr>Qr && Kc>Qc && Kr>Qr)cout<<"YES"<<endl;
    else if(Tc<Qc && Tr>Qr && Kc<Qc && Kr>Qr)cout<<"YES"<<endl;
    else if(Tc>Qc && Tr<Qr && Kc>Qc && Kr<Qr)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
