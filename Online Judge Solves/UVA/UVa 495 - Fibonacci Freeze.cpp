/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<"\n";}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " ";
        call(++it, rest...);
    }
};
//

int fib[10001][10500];
void fibB()
{
     fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=1;
    int i,j;
    for(i=3;i<10001;i++)
    {
        for(j=0; j<10500;j++)
        {
            fib[i][j] += fib[i-1][j]+fib[i-2][j];
            if(fib[i][j]>=10)
            {
                fib[i][j+1] += fib[i][j]/10;
                 fib[i][j]%=10;
            }
        }

    }

}
int main()
{

    fibB();
    int x;
    while(cin>>x)
    {
        int i=0;
        for(i=10499;i>0;i--)
            if(fib[x][i]!=0)break;

        cout<<"The Fibonacci number for "<<x<<" is ";
        for(;i>=0;i--)
            cout<<fib[x][i];
        cout<<"\n";
    }
    return 0;

}
