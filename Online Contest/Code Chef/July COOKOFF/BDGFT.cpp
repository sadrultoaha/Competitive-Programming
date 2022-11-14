/**
    SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
#define MEM(a,b)          memset(a,b,sizeof(a))
#define ll long long
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
#define MAX 500000
bool sum[2*MAX];
char num[MAX];


bool func(bool a,bool b)
{
    int c1=0,c0=0;
    if(a==1)c1++;
    else c0++;

    if(b==1)c1++;
    else c0++;

    return c1*c1==c0?true:false;
}
void build(int a, int L, int R)
{
             sum[a]=0;
             if(L == R)
             {
                 if(num[L]=='0') sum[a]=0;
                 else sum[a]=1;

                return;
             }

             int mid = (L + R)/2;
             build(a * 2, L, mid);
             build(a * 2 + 1, mid + 1, R);
             sum[a]= func(sum[a*2] , sum[a * 2 + 1]);
 }

 int query(int a, int L, int R, int l, int r)
{
             if(r < L || R < l) return 0;
             if(l <= L && R <= r) return sum[a];

             int mid = (L + R)/2;
             bool x = query(a * 2, L, mid, l, r);
             bool y = query(a * 2 + 1, mid + 1, R, l, r);

             return func(x,y);
 }


int main()
{
    read;
    int T;
    scanf("%d",&T);

    while(T--)
    {
        scanf("%s",num);
        int bc=0;
        int sz = strlen(num);
        build(1, 0, sz-1);

        for(int i=0,j=1;j<sz;j++)
        {
            bc += query(1, 0, sz-1, i, j);
        }
        printf("%d\n",bc);

    }


}



