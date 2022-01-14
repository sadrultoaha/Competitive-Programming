    /**
        SunWalker
    **/

    #include<bits/stdc++.h>
    using namespace std;
    #define IN freopen("IN.txt","r",stdin)
    #define OUT freopen("OT.txt","w",stdout)
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
    #define maxn 1009
    #define inf 10000009

    int graph[maxn][maxn];
    int dist[maxn][maxn];

    void floydWarshall(int v){
        for(int k=0;k<v;k++){
            for(int i=0;i<v;i++){
                for(int j=0;j<v;j++){
                    dist[i][j]=min(dist[i][j], dist[i][k]+dist[k][j]);
                }
            }
        }
    }


    int main()
    {
        int x,y,zero=0;
        int cs=1;
        while(cin>>x>>y,!(x == 0 && y == 0))
        {
            int E=0,V=0;
            int src[1000],dest[1000];
            do
            {
                src[E]=x;
                dest[E]=y;
                //dbg( src[E], dest[E]);
                V=max(max(V,x),y);
                E++;
            }
            while(cin>>x>>y,!(x==0 && y==0));
            //dbg(V,E);

            for(int i=0;i<V;i++){
                for(int j=0;j<V;j++){
                    dist[i][j]=inf;
                    if(i==j)dist[i][j]=0;
                }
            }

            for(int i=0;i<E;i++){
                int w=1;
                graph[src[i]-1][dest[i]-1]=w;
                dist[src[i]-1][dest[i]-1]=w;
            }

            floydWarshall(V);

            int cost=0,times=0;
            for(int i=0;i<V;i++){
                for(int j=0;j<V;j++){
                    if(dist[i][j]==inf)continue;
                    cost+=dist[i][j];
                    if(dist[i][j]>0 && dist[i][j]<inf)times++;
                }
            }

            printf("Case %d: average length between pages = %0.3f clicks\n",cs,double(cost)/times);
            cs++;


        }
    }

