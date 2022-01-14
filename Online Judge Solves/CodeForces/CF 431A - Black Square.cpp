#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,d,cal=0;
    char x;
    string s;
    cin>>a>>b>>c>>d;

    while(cin>>x)
    {
        if(x=='1')cal+=a;
            else if(x=='2')cal+=b;
            else if(x=='3')cal+=c;
            else if(x=='4')cal+=d;
    }
    cout<<cal<<endl;

}
