/**
Solved:
1.UVA A Node Too Far
**/
vector<int>G[]
int BFS(int sr)
{
    mem(dis,-1);
    queue<int>Q;
    Q.push(sr);
    dis[sr]=0;
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        FOR(i,G[u].size())
        {
            int v=G[u][i];
            if(dis[v]==-1)
            {
                dis[v] = dis[u]+1;
                Q.push(v);
            }
        }
    }
}
