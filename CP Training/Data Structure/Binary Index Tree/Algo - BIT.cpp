// COMMENTS
/* ****** 0 indexed BIT ******
 * Source: http://code-library.herokuapp.com/fenwick-tree-extended/java
 * There are 3 kinds of BIT functions based on query and update:
 * 1. Point Update Range Query (PURQ)
 * 2. Range Update Point Query (RUPQ)
 * 3. Range Update Range Query (RURQ)
 */ 
// _COMMENTS

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
#define mem(a,b)        memset(a,b,sizeof(a))
#define EPS             1e-9
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
#define all(x)          x.begin(), x.end()


#define dbg(args...) {cerr<<"-->";debugger::call(#args,args);cerr<<endl;}
struct debugger {
    static void call(const char* it) {}
    template<typename T, typename ... aT>
    static void call(const char* it, T a, aT... rest) {
        string b;
        for (; *it&&*it != ','; ++it) if (*it != ' ')b += *it;
        cerr << b << "=" << a << " " ;
        call(++it, rest...);
    }
};



#define MAX 100010
struct BIT_PURQ {
    ll bit[MAX];
    int N;

    void init(int n) {
        mem(bit, 0);
        N = n;
    }
    // add value to bit[i]
    void add(int i, ll value) {
        for (; i < N; i |= i + 1) bit[i] += value;
    }
    // sum[0..i]
    ll sum(int i) {
        ll res = 0;
        for (; i >= 0; i = (i & (i + 1)) - 1) res += bit[i];
        return res;
    }
    // sum[a..b]
    ll sum(int a, int b) {
        return sum(b) - ((a < 1) ? 0 : sum(a-1));
    }
    // bit[i] = value
    void assign(int i, ll value) {
        add(i, value -sum(i, i));
    }
};

struct BIT_RUPQ {
    ll bit[MAX];
    int N;

    void init(int n) {
        mem(bit, 0);
        N = n;
    }
    // add 'value' to each element in range [i..N]
    void add(int i, ll value) {
        for (; i < N; i |= i + 1) bit[i] += value;
    }
    // add 'value' to each element in range [a..b]
    void add(int a, int b, ll value) {
        add(a, value);
        add(b + 1, -value);
    }
    // return value of bit[i]
    ll get(int i) {
        ll res = 0;
        for (; i >= 0; i = (i & (i + 1)) - 1) res += bit[i];
        return res;
    }
};

struct BIT_RURQ {
    ll bit1[MAX], bit2[MAX];
    int N;

    void init(int n) {
        mem(bit1, 0);
        mem(bit2, 0);
        N = n;
    }
    void _add(ll *bit, int i, ll value) {
        for (; i < N; i |= i + 1)
            bit[i] += value;
    }
    ll _sum(ll *bit, int i) {
        ll res = 0;
        for (; i >= 0; i = (i & (i + 1)) - 1)
            res += bit[i];
        return res;
    }
    // add 'value' to each element in range [a..b]
    void add(int a, int b, ll value) {
        _add(bit1, a, value);
        _add(bit1, b, -value);
        _add(bit2, a, -value * (a - 1));
        _add(bit2, b, value * b);
    }
    // sum[0...i]
    ll sum(int i) {
        return (_sum(bit1, i) * i + _sum(bit2, i));
    }
    // sum[a...b]
    ll sum(int a, int b) {
        return sum(b) - ((a < 1) ? 0 : sum(a-1));
    }
};

// Find the smallest index for which _sum[0...index]>=value
// Works for BIT_PURQ & BIT_RURQ
int bs_bit(BIT_PURQ bit, ll value) {
    int lf = 0, rt = bit.N - 1, mid;
    while (lf <= rt) {
        mid = (lf + rt) >> 1;
        ll res = bit.sum(mid);
        if (res == value)return mid;
        if (res > value) rt = mid - 1;
        else lf = mid + 1;
    }
    return -1;
}

BIT_PURQ bit_purq;
BIT_RUPQ bit_rupq;
BIT_RURQ bit_rurq;

int main() {

    bit_purq.init(10);
    bit_purq.assign(5, 1);
    bit_purq.add(9, -2);
    cout << bit_purq.sum(0, 10) << "\n";            // -1

    bit_purq.init(6);
    vector<int> v = {1, 2, 3, 4, 5, 6};
    for(int i=0; i<6; i++) bit_purq.add(i, v[i]);
    for (int i = 0; i < 6; i++)
        cout << bit_purq.sum(i, i) << " ";
    cout << endl;                                   // 1 2 3 4 5 6

    bit_purq.init(8);
    v = {0, 0, 1, 0, 0, 1, 0, 0};
    for(int i=0; i<6; i++) bit_purq.add(i, v[i]);
    cout << bs_bit(bit_purq, 2) << "\n";            // 5
    cout << bs_bit(bit_purq, 3) << "\n";            // -1

    bit_rupq.init(10);
    bit_rupq.add(0, 2, 5);
    bit_rupq.add(2, 4, 5);
    cout << bit_rupq.get(1) << " " << bit_rupq.get(2)
         << " " << bit_rupq.get(3) << "\n";         // 5 10 5

    bit_rurq.init(10);
    bit_rurq.add(0, 9, 1);
    bit_rurq.add(0, 0, -2);
    cout << bit_rurq.sum(0, 9) << endl;             // 8
}