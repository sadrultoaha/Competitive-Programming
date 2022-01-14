 #include<bits/stdc++.h>
 using namespace std;

 typedef long long ll;
 typedef pair<int, int>pii;
 typedef vector<pii> vii;
 typedef vector<int> vi;
 #define INF 1000000000 // 1 billion, safer than 2B for Floyd Warshall’s
 #define rd freopen("IN.txt","r",stdin)
 #define wrt freopen("OT.txt","w",stdout)


 // memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
 //memset(arr, 0, sizeof arr); // to clear array of integers
 //ans = a ? b : c; // to simplify: if (a) ans = b; else ans = c;
 //ans += val; // to simplify: ans = ans + val; and its variants
 //index = (index + 1) % n; // index++; if (index >= n) index = 0;
 //index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
 //int ans = (int)((double)d + 0.5); // for rounding to nearest integer
 //ans = min(ans, new_computation); // min/max shortcut


//.........................................

int main()
{
    int K,N,M,X,Y;
   // rd;
    while(1){
    cin>>K;
    if(K==0)return 0;
    cin>>N>>M;
    while(K--)
    {
        cin>>X>>Y;

        if(X==N || Y==M)cout<<"divisa"<<endl;
        else if(X>N && Y>M)cout<<"NE"<<endl;
        else if(X<N && Y<M)cout<<"SO"<<endl;
        else if(X>N && Y<M)cout<<"SE"<<endl;
        else if(X<N && Y>M)cout<<"NO"<<endl;
    }
    }

    return 0;
}


