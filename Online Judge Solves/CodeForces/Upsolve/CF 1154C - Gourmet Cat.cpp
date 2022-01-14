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

int main()
{
    read;
   ll a,b,c,x,y,z;
   cin>>a>>b>>c;
   x=a;
   y=b;
   z=c;
   ll mx=0;
   for(int i=1;i<=7;i++)
   {
       ll ex=i,cnt=0;
       a=x;b=y;c=z;
        while(1)
        {
            if(ex==8)ex=1;

            if(b==0 && (ex==1||ex==4))break;
            if(a==0 && (ex==2 || ex==3 || ex==6))break;
            if(c==0 && (ex==5 || ex==7))break;

            if(ex==3){a--;b--;c--;cnt+=2;}
            else if(ex==1)b--;
            else if(ex==2 ||ex==6)a--;
            else if(ex==7)c--;
            ex++;
            cnt++;
        }
        mx=max(mx,cnt);
   }
   cout<<mx<<"\n";


}

