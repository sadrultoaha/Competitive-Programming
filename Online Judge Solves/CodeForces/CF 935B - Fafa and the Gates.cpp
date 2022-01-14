#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,x=0,y=0,G=0,Uc=0,Rc=0;
    string a;
    cin>>n;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U'){if(i==0)Uc=1; y++;}
        else {if(i==0)Rc=1; x++;}
        if(Uc==1 && x>y){c++;Uc=0;Rc=1;}
        else if(Rc==1 && y>x){c++;Rc=0;Uc=1;}
    }
    cout<<c;

}
