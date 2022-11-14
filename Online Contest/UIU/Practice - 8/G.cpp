
    /**
        SunWalker
    **/

    #include<bits/stdc++.h>
    using namespace std;
    #define IN freopen("IN.txt","r",stdin)
    #define OUT freopen("OT.txt","w",stdout)
    #define fastread() {ios_base::sync_with_stdio(false);cin.tie(0);}
    #define MEM(a,b)          memset(a,b,sizeof(a))
    #define INF 10000009
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

    int network[1010][1010];
    int dist[1010][1010];

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
        int x,y,zero=0,cs=1;
        while(cin>>x>>y,!(x==0 && y==0))
        {

            int links=0,nodes,src[1000],dst[1000];
            do
            {
                src[links]=x;dst[links]=y;
                nodes=max(max(nodes,x),y);
                links++;

            }
              while(cin>>x>>y,!(x==0 && y==0));


            for(int i=0;i<nodes;i++){
                for(int j=0;j<nodes;j++){
                    dist[i][j]=INF;
                    if(i==j)dist[i][j]=0;
                }
            }

            for(int i=0;i<links;i++)
            {
                network[src[i]-1][dst[i]-1]= 1;
                dist[src[i]-1][dst[i]-1]= 1;
            }

            floydWarshall(nodes);

            int cost=0,rep=0;
            for(int i=0;i<nodes;i++){
                for(int j=0;j<nodes;j++){
                    if(dist[i][j]==INF)continue;
                    cost+=dist[i][j];
                    if(dist[i][j]>0 && dist[i][j]<INF)rep++;
                }
            }

            printf("Case %d: average length between pages = %0.3f clicks\n",cs,cost/(double)rep);
            cs++;


        }
    }

