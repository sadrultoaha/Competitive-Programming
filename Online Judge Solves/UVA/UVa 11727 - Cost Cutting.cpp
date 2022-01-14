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
    int T,Empl1,Empl2,Empl3,cas=0;
    cin>>T;
    while(T--){
        cas ++;
        cin>>Empl1>>Empl2>>Empl3;
        if(Empl1 > Empl2 && Empl1 < Empl3 || Empl1 > Empl3 && Empl1 < Empl2 )cout<<"Case "<<cas<<": "<<Empl1<<endl;
        else if(Empl2> Empl1 && Empl2 < Empl3 || Empl2> Empl3 && Empl2 < Empl1)cout<<"Case "<<cas<<": "<<Empl2<<endl;
        else if(Empl3> Empl1 && Empl3 < Empl2 || Empl3> Empl2 && Empl3 < Empl1)cout<<"Case "<<cas<<": "<<Empl3<<endl;
        }
return 0;
}


