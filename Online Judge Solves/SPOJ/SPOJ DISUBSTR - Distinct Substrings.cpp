
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

const double EPS = 1e-9;
const int INF = 0x7f7f7f7f;
const double PI = 3.141592653589793;
const double E = 2.718281828459045;


int cmp(double x, double y = 0, double tol = EPS) {
	return (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1;
}
const int MAXN = 100005;
char s[MAXN];
int t, n, rnk[MAXN], sa[MAXN], lcp[MAXN];
// n = strlen(s) + 1
bool compare(int i, int j) {
	return rnk[i + t] < rnk[j + t];
}
void setLCP() {
	int size = 0, i, j;
	for (i = 0; i < n; i++) if (rnk[i] > 0) {
		j = sa[rnk[i] - 1];
		while (s[i + size] == s[j + size]) ++size;
		lcp[rnk[i]] = size;
		if (size > 0) --size;
	}
	lcp[0] = 0;
}

int distinctSubstringsCount() {
	int ans = n - 1 - sa[1], i;
	for (i = 2; i < n; i++) {
		int ln = n - 1 - sa[i];
		ans += (ln - lcp[i]);
	}
	return ans;
}

void build() {
	int bc[256];
	for (int i = 0; i < 256; ++i) bc[i] = 0;
	for (int i = 0; i < n; ++i) ++bc[s[i]];
	for (int i = 1; i < 256; ++i) bc[i] += bc[i - 1];
	for (int i = 0; i < n; ++i) sa[--bc[s[i]]] = i;
	for (int i = 0; i < n; ++i) rnk[i] = bc[s[i]];
	for (t = 1; t < n; t <<= 1) {
		for (int i = 0, j = 1; j < n; i = j++) {
			while (j < n && rnk[sa[j]] == rnk[sa[i]]) j++;
			if (j - i == 1) continue;
			int *start = sa + i, *end = sa + j;
			sort(start, end, compare);
			int first = rnk[*start + t], num = i, k;
			for (; start < end; rnk[*start++] = num) {
				k = rnk[*start + t];
				if (k != first and (i > first or k >= j))
					first = k, num = start - sa;
			}
		}
	}
	setLCP();
}

int main() {

    int T;
    scanf("%d",&T);
    for(int cs=1;cs<=T;cs++)
    {
        scanf("%s", s);
        n = strlen(s) + 1;
        build();
        cout<<distinctSubstringsCount()<<"\n" ;
    }

}
