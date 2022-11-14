/// This Problem Took 10 hrs to solve  :(
#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define ROF(i,N) for(int i=N-1;i>=0;i--)
#define ROF1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("IN.txt","r",stdin)
#define write freopen("OT.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define mem(a,b)          memset(a,b,sizeof(a))
#define EPS 1e-9
#define PI              acos(-1.0)
#define INF             2e16

#define ll              long long
#define ull             unsigned long long
#define ft              first
#define sd              second
#define bn              begin
#define en              end
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define pll             pair<LL,LL>
#define all(x) x.begin(), x.end()


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

vector<pair<char,ll>>cmd;

char turn2x(ll x,ll dx)
{
     if(dx>x)return 'E';
     else if(dx<x)return 'O';
}

char turn2y(ll y,ll dy)
{
     if(dy>y)return 'N';
     else if(dy<y)return 'S';
}
void turn2right(char cur,char dir)
{
     if(cur=='E' && cur!=dir)
     {
          cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
     }
     else  if(cur=='O' && cur!=dir)
     {
          cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
     }
     else if(cur=='N')
     {
          if(dir=='O') // N2W -> 270
          {
               cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
               cmd.pb(mp('D',-1));
          }
          else // N2E -> 90
          {
               cmd.pb(mp('D',-1));
          }
     }
     else if(cur=='S')
     {
          if(dir=='O')// S2W -> 90
          {
               cmd.pb(mp('D',-1));
          }
          else // S2E -> 270
          {
               cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
               cmd.pb(mp('D',-1));
          }
     }
}


void turn2up(char cur,char dir)
{
     if(cur=='N' && cur!=dir)
     {
          cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
     }
     else  if(cur=='S' && cur!=dir)
     {
          cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
     }
     else if(cur=='O')
     {
          if(dir=='N') // W2N -> 90
          {
               cmd.pb(mp('D',-1));
          }
          else // W2S -> 270
          {
               cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
               cmd.pb(mp('D',-1));
          }

     }
     else if(cur=='E')
     {
          if(dir=='N')// E2N -> 270
          {
               cmd.pb(mp('D',-1)); cmd.pb(mp('D',-1));
               cmd.pb(mp('D',-1));
          }
          else // E2S
          {
               cmd.pb(mp('D',-1));
          }
     }

}
int main()
{
#ifdef SunWalker
    //read;
   //write;
#endif


     ll x,y,dx,dy,disx,disy;
     char cur,dir;
     cin>>x>>y>>cur>>dx>>dy;

     disx = abs(x-dx);
     disy = abs(y-dy);
     if((cur=='O'&&((dx>x && dy<y)||dx<x)) || (cur=='N'&&(dx>x && dy<y)) || (cur=='E'&&(dx>x ||(dx<x && dy>y))) || (cur=='S'&&(dx<x && dy>y)) || dy==y)
     {
          if(x!=dx)
        {
             dir=turn2x(x,dx);
             turn2right(cur,dir);
             cur=dir;
             cmd.pb(mp('A',disx));
        }
        if(y!=dy)
        {
          dir = turn2y(y,dy);
          turn2up(cur,dir);
          cmd.pb(mp('A',disy));
        }
     }
     else
     {
          if(y!=dy)
        {
          dir = turn2y(y,dy);
          turn2up(cur,dir);
          cur=dir;
          cmd.pb(mp('A',disy));
        }
        if(x!=dx)
        {
             dir=turn2x(x,dx);
             turn2right(cur,dir);
             cmd.pb(mp('A',disx));
        }
     }
     ll sz=cmd.size();
     cout<<sz<<"\n";
     FOR(i,sz)
     {
          cout<<cmd[i].ft;
          if(cmd[i].sd>=0)cout<<" "<<cmd[i].sd<<"\n";
          else cout<<"\n";
     }
return 0;
}
