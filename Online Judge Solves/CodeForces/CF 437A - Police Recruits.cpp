#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,ev=0,pol=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)pol+=x;
        else if(x==-1 && pol>0){pol--;}
        else ev++;
    }
    cout<<ev<<endl;
}
