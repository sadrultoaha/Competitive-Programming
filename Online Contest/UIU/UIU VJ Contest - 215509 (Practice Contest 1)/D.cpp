#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
vector<int> adj[100];
//try
class Q {
public:
    int r;
    int c;
    Q(int x, int y: r(x), c(y){}
};

 void bfs(char grid[][], int n)
 {
     Q source(0, 0);
     int visited[N][M];
 	for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
        {
            if (grid[i][j] == '.' )
                visited[i][j] = 1;
            else visited[i][j] = 0;

            if(grid[i][j]=='x')
            {
            source.r = i;
            source.c = j;
            }
        }
 	}

 	queue<Q> q;
 	q.push(source);
    visited[source.r][source.c] = 1;

 while(!q.empty())
 {
	Q p = q.front();
        q.pop();

	 for(int i = 0; i < adj[p].size(); i++)
 	    if(visited[adj[p][i]] == 0)
	     {
            int v = adj[p][i];
            visited[v] = 1;
             Q.push(v);
 	     }
 }
}
int main()
{
    int T,N;
    char grid[101][101];
    cin>>T;
    while(T--)
    {
    cin>>N;


    for(int L=0;L<N;L++)
    {
        for(int l=0;l<N;l++)
        {
           cin>>grid[L][l];
        }
    }



}
