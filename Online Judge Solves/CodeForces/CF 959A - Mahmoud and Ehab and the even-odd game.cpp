
/**
    author: SadrulToaha
    status: AC
    pType :
    sTime : 3.03.2018 - 10:40
    eTime :
    LS    :
**/

    #include<bits/stdc++.h>

    #define in freopen("IN.txt","r",stdin)
    #define out freopen("OT.txt","w",stdout)
    #define eps             1e-8
    #define inf             2e18
    #define ll              long long
    #define ull             unsigned long long
    #define PI              acos(-1.0)
    #define pb              push_back
    #define mkpr              make_pair
    #define mpii            map<int,int>
    #define mpcc            map<char,char>
    #define vci             vector<int>
    #define vcll            vector<long long>
    #define pii             pair<int,int>
    #define pLL             pair<ll,ll>
    #define sq(x)           ((x)*(x))
    #define cb(x)           ((x)*(x)*(x))
    #define sqR(x)          sqrt(x)
    #define pw(x,y)         pow(x,y)
    #define mn(x,y)         min(x,y)
    #define mn3(x,y,z)      min(x,min(y,z))
    #define mn4(w,x,y,z)    min(min(w,x),min(y,z))
    #define mx(x,y)         max(x,y)
    #define mx3(x,y,z)      max(x,max(y,z))
    #define mx4(w,x,y,z)    max(max(w,x),max(y,z))
    #define scni(x)         scanf("%d",&x)
    #define scnll(x)        scanf("%lld",&x)
    #define scnf(x)         scanf("%f",&x)
    #define scnd(x)         scanf("%lf",&x)
    //#define scn64(x)        scanf("%I64",&x)
    #define prni(x)         printf("%d",x);
    #define prnll(x)        printf("%lld",x);
    #define prnf(x)         printf("%f",x);
    #define prnd(x)         printf("%lf",x);
    //#define prn64(x)         printf("%d",x);
    #define For(i,N) for(int i=0;i<(N);i++)
    #define RFor(i,N) for(int i=(N);i>0;i--)
    #define MEM(a,x) memset(a,x,sizeof(a))
    #define all(x) x.begin(), x.end()


  /**
    #define cpp_io() {ios_base::sync_with_stdio(false);cin.tie(NULL);}
    #define For(i,N) FOR(i,N)
    #define Forr(i,a,b) FORR(i,a,b)
    #define Fotr(i,a,b,c) FOTR(i,a,b,c)
    #define FOR(i,N) FORR(i, 0, N)
    #define FORR(i,a,b) FOTR(i, a, b, 1)
    #define FOTR(i,a,b,c) for(int i=(a);i<(b);i+=(c))
    #define FOREACH(i,x) for(__typeof__((x).begin())i=(x).begin();i!=(x).end();i++)
    #define MEM(a,x) memset(a,x,sizeof(a))
    #define all(x) x.begin(), x.end()


    int fx[] = {+1,-1,+0,+0,+1,+1,-1,-1,+0};
    int fy[] = {+0,+0,+1,-1,+1,-1,+1,-1,+0};
    template <typename T> inline T GCD (T a,T b ) {a = abs(a);b = abs(b);while ( b ) { a = a % b; swap ( a, b ); } return a;}
    template <typename T> inline T LCM(T x,T y){T tp = GCD(x,y);if( (x / tp) * 1. * y > 9e18) return 9e18;return (x / tp) * y;}
    template <typename T> inline T BigMod(T A,T B,T M){T ret = 1;while(B){if(B & 1) ret = (ret * A) % M;A = (A * A) % M;B = B >> 1;}return ret;}
    template <typename T> inline T ModInv (T A,T M){return BigMod(A,M-2,M);}
    /*---------------------------fast I/O------------------------------------*/
   /** #define scani2(a,b) scani(a) , scani(b)
    #define scani3(a,b,c) scani(a), scani(b), scani(c)
    #define scani4(a,b,c,d) scani(a), scani(b), scani(c), scani(d)
    template <typename T> bool scani(T &n){n = 0;bool got = false;bool negative = false;char c = gc();while( c < '0' || c > '9'){if(c == '-') negative = true;c = gc();}while(c >= '0' && c <= '9'){got = true;n = n*10 + c-48;c = gc();}if(negative) n = ~(n-1);return got;}
    template <typename T> void write(T n,bool line = true){if(n<0) {pc('-');n = -n;}if(!n) {pc('0');if(line) pc('\n');return;}char buff[22];int len = 0;while(n) buff[len++] = n%10+48,n/=10;for(int i=len-1;i>=0;i--) pc(buff[i]);if(line) pc('\n');}
    int scans(char *a){int i=0;char c = 0;while(c < 33) c = gc();while(c > 33){a[i++] = c;c = gc();}a[i] = 0;return i;}
    /*********************************************** End of template *********************************************/


     /** memset(memo, -1, sizeof memo); // initialize DP memoization table with -1
     memset(arr, 0, sizeof arr); // to clear array of integers
     ans = a ? b : c; // to simplify: if (a) ans = b; else ans = c;
     ans += val; // to simplify: ans = ans + val; and its variants
     index = (index + 1) % n; // index++; if (index >= n) index = 0;
     index = (index + n - 1) % n; // index--; if (index < 0) index = n - 1;
     int ans = (int)((double)d + 0.5); // for rounding to nearest integer
     ans = min(ans, new_computation); // min/max shortcut */

     using namespace std;

/******************************************* END ******************************************/



int main()
{

 int n,a,i=1,M=0,x;
 cin>>n;
 while(n>0)
 {
     if(i%2!=0)
     {
         x=n;
       while(1)
       {
           if(x%2==0 && x<=n){a=x;break;}
           else x--;
       }
       if(a%2==0){n-=a;M=1;}
       else M=0;
     }
     else
    {
         x=n;
       while(1)
       {
           if(x%2!=0 && x<=n){a=x;break;}
           else x--;
       }
       if(a%2!=0){n-=a;M=0;}
       else M=1;
    }
    i++;
 }
 if(M==1)cout<<"Mahmoud";
 else cout<<"Ehab";

return 0;
}

