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

struct item {
    int prior, value, cnt,res;
    bool rev;
    item *l, *r;
    item(){}
	item(int value) {
		cnt = 1;
		this->value = value;
		res = value;
		prior = rand();
		l = r = NULL;
		rev = false;
	}
}*t;

typedef struct item * pitem;

int cnt (pitem it) {
    return it ? it->cnt : 0;
}

void upd_cnt (pitem it) {
    if (it)
        it->cnt = cnt(it->l) + cnt(it->r) + 1;
}
void reset(pitem t){
   if(t) t->res = t->value;//lazy already propagated
}
void combine(pitem& t,pitem l,pitem r){//combine segtree ranges
    if(!l || !r)return void(t = l?l:r);
    t->res = max(l->res, r->res) ;
}
void operation(pitem t){//operation of segtree
    if(!t)return;
    reset(t);//node represents single element of array
    combine(t,t->l,t);combine(t,t,t->r);
}
void push (pitem it) {
    if (it && it->rev) {
        it->rev = false;
        swap (it->l, it->r);
        if (it->l)  it->l->rev ^= true;
        if (it->r)  it->r->rev ^= true;
    }
}
void merge (pitem & t, pitem l, pitem r) {

    if (!l || !r)
        t = l ? l : r;
    else if (l->prior > r->prior)
        merge (l->r, l->r, r),  t = l;
    else
        merge (r->l, l, r->l),  t = r;
    upd_cnt (t);
    operation(t);
}

void split (pitem t, pitem & l, pitem & r, int key, int add = 0) {
    if (!t)
        return void( l = r = 0 );
    int cur_key = add + cnt(t->l);
    if (key <= cur_key)
        split (t->l, l, t->l, key, add),  r = t;
    else
        split (t->r, t->r, r, key, add + 1 + cnt(t->l)),  l = t;
    upd_cnt (t);
    operation(t);
}

void reverse (pitem t, int l, int r) {
    pitem t1, t2, t3;
    split (t, t1, t2, l);
    split (t2, t2, t3, r-l+1);
    t2->rev ^= true;
    merge (t, t1, t2);
    merge (t, t, t3);
}

int main()
{
    srand(time(NULL));
    int n;
    scanf("%d", &n);
    bool ok =1;
        for(int i=1;i<=n;i++)
        {
            char ch;
            int x,y;
             scanf(" %c %d %d",&ch, &x, &y);

            if(ch=='A')
            {
                pitem T;
                T = new item(x);
                pitem l,r,m;
                if(ok)t=T;
                else
                {
                    split(t, l, r, y-1);
                    merge(m, l, T);
                    merge(t, m, r);
                }
                ok=0;
            }
            else
            {
                pitem L,mid,R;
                split(t,L,mid,x-1);
                split(mid,t,R,y-x+1);
                int ans = t->res;
                merge(mid,L,t);
                merge(t,mid,R);
                printf("%d\n",ans);
            }


        }


}
