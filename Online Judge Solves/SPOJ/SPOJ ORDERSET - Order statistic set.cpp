/**
    SunWalker
**/


#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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


typedef
tree<
  int,
  null_type,
  less<int>,
  rb_tree_tag,
  tree_order_statistics_node_update>
ordered_set;

int main()
{
    fastread();
	int Q;
	scanf("%d",&Q);
	ordered_set o_set;
	while(Q--)
    {
        int x;
        char ch;
        getchar();
        scanf("%c",&ch);
        scanf("%d",&x);
        if(ch=='I'){o_set.insert(x);}
        else if(ch=='D'){o_set.erase(x);}
        else if(ch=='C'){int val = o_set.order_of_key(x);printf("%d\n",val);}
        else if(ch=='K'){x--;int val = *(o_set.find_by_order(x));if((x+1)<=o_set.size() && (x+1)>=1)printf("%d\n",val);else printf("invalid\n");}
    }
	return 0;
}
