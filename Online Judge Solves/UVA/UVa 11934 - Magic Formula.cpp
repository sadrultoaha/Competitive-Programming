#include<bits/stdc++.h>

using namespace std;
int main()
{
    int a,b,c,d,L,Q,coun;
    //freopen("Input.txt","r",stdin);
    //freopen("Output.txt","w",stdout);
    while(1)
    {
        coun=0;
    cin>>a>>b>>c>>d>>L;
    if(a==0&&b==0&&c==0&&d==0&&L==0) return 0;

    for(int x=0;x<=L;x++)
    {
        Q=a*(x*x)+b*x+c;
        if(Q%d==0)
                coun++;
    }
    cout<<coun<<endl;
    }

}

