#include<bits/stdc++.h>
using namespace std;

#define FOR(i,N) for(int i=0;i<N;i++)
#define RFOR(i,N) for(int i=N-1;i>=0;i--)
#define RFOR1(i,a,b) for(int i=(b);i>=(a);i--)
#define FOR1(i,a,b) for(int i=(a);i<=(b);i++)
#define FORi(i,a,b,c) for(int i=(a);i<=(b);i+=(c))

#define read freopen("in.txt","r",stdin)
#define write freopen("out.txt","w",stdout)
#define fastread {ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);}
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

struct Point {
    int x, y;
};

int overlap(Point l1, Point r1,Point l2, Point r2){
    int area1 = abs(l1.x - r1.x)
      * abs(l1.y - r1.y);

    int area2 = abs(l2.x - r2.x)
      * abs(l2.y - r2.y);

    int x_dist = min(r1.x, r2.x)
                  - max(l1.x, l2.x);
    int y_dist = (min(r1.y, r2.y)
                  - max(l1.y, l2.y));
    int areaI = 0;
    if( x_dist > 0 && y_dist > 0 )
    {
        areaI = x_dist * y_dist;
    }

    return (area1 + area2 - areaI);
}

int main()
{
    fastread;

    int w,h,n;
    while(cin>>w>>h>>n,!(w==0 && h==0 && n==0))
    {
        ll totarea = w*h;
        int X1arr[107],Y1arr[107],X2arr[107],Y2arr[107];

        FOR(i,n)
        {

            cin>>X1arr[i]>>Y1arr[i]>>X2arr[i]>>Y2arr[i];
            int tot = abs(X2arr[i]- X1arr[i])*abs(Y2arr[i] - Y1arr[i]);
            if(i==0)totarea -= tot;
            else
            {
                Point l1 = {X1arr[i-1],Y1arr[i-1]}, r1 = {X2arr[i-1],Y2arr[i-1]};
                Point l2 = {X1arr[i],Y1arr[i]}, r2 = {X2arr[i],Y2arr[i]};
                totarea -= overlap(l1, r1, l2, r2);
            }
        }
        cout<<"ans:"<<totarea<<"\n";
    }
return 0;
}


