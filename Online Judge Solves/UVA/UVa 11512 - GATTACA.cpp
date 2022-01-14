#include <bits/stdc++.h>

using namespace std;

#define FOR(i, N) FORR(i, 0, N)
#define FORR(i, a, b) FOTR(i, a, b, 1)
#define FOTR(i, a, b, c) for(int i=(a);i<(b);i+=(c))

#define MEM(a, x) memset(a,x,sizeof(a))
#define pii pair<int, int>
#define MAX 100010   //Keep MAX as small as possible
#define MAXLG 17   //ceil(log2(MAX))
int Ocount = 0;
struct SuffixArray {
    pair<pii, int> L[MAX];
    int P[MAXLG + 1][MAX], n, stp, cnt, sa[MAX], lcp[MAX];
    char str[MAX];

    void Generate() {
        MEM(L, 0);

        n = strlen(str);
        FOR(i, n) P[0][i] = str[i] - 1;
        sa[0] = 0;
        for (stp = 1, cnt = 1; cnt < n; stp++, cnt <<= 1) {
            FOR(i, n) L[i] =
                 { {P[stp - 1][i], (i + cnt < n)? P[stp - 1][i + cnt] : -1}, i};
            sort(L, L + n);
            FOR(i, n)P[stp][L[i].second] =
                             i > 0 && L[i].first == L[i - 1].first ?
                             P[stp][L[i - 1].second] : i;
        }
        FOR(i, n)sa[i] = L[i].second;
    }

    int LcpXY(int x, int y) {  // LcpXY(i, j) = lcp of suffixes [i...j]
        x = sa[x], y = sa[y];
        int k, ret = 0;
        if (x == y)return n - x;
        for (k = stp - 1; k >= 0 && x < n && y < n; k--) {
            if (P[k][x] == P[k][y])
                x += 1 << k, y += 1 << k, ret += 1 << k;
        }
        return ret;
    }

    void LcpArray() {
        int i, j, k;
        int *ar = new int[MAX];

        FOR(i, n) ar[sa[i]] = i;

        for (k = 0, i = 0; i < n; i++, k ? k-- : 0) {
            if (ar[i] == (n - 1))k = 0;
            else {
                j = sa[ar[i] + 1];
                while ( ((i + k) < n) && ((j + k) < n) &&
                       (str[i + k] == str[j + k]) )
                    k++;
            }
            lcp[ar[i]] = k;
        }
        delete ar;
    }
} sa;

void rabin_karp(string const& s, string const& t) {
    const int p = 31;
    const int m = 1e9 + 9;
    int S = s.size(), T = t.size();

    vector<long long> p_pow(max(S, T));
    p_pow[0] = 1;
    for (int i = 1; i < (int)p_pow.size(); i++)
        p_pow[i] = (p_pow[i-1] * p) % m;

    vector<long long> h(T + 1, 0);
    for (int i = 0; i < T; i++)
        h[i+1] = (h[i] + (t[i] - 'A' + 1) * p_pow[i]) % m;
    long long h_s = 0;
    for (int i = 0; i < S; i++)
        h_s = (h_s + (s[i] - 'A' + 1) * p_pow[i]) % m;


    for (int i = 0; i + S - 1 < T; i++) {
        long long cur_h = (h[i+S] + m - h[i]) % m;
        if (cur_h == h_s * p_pow[i] % m)  Ocount++;

    }
}

int main() {


    int T;
    scanf("%d",&T);
    for(int cs=1;cs<=T;cs++)
    {
        scanf ("%s",sa.str);
        sa.Generate();
        sa.LcpArray();
        string tex="";
        int mx=0,pos;
        for(int i=0;i<strlen(sa.str);i++)
            if(sa.lcp[i] > mx){mx = sa.lcp[i];pos=sa.sa[i];}

        for(int i=pos;i<pos+mx;i++)tex+=sa.str[i];
       //cout<<tex<<"\n";
       if(mx==0)cout<<"No repetitions found!\n";
       else{
        rabin_karp(tex,sa.str);
        cout<<tex<<" "<<Ocount<<"\n";
       }
       Ocount = 0;
    }
    return 0;
}
