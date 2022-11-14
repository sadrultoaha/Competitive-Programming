#include <bits/stdc++.h>

using namespace std;

class Q {
public:
    int r;
    int c;
    int d;
    Q(int x, int y, int w): r(x), c(y), d(w){}

};
int bfs(char Townsville[20][20],char v,int N,int M)
{
    Q source(0, 0, 0);

    bool visited[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
        {
            if (Townsville[i][j] == '#'||Townsville[i][j] == 'm' )
                visited[i][j] = true;
            else
                visited[i][j] = false;

            if (Townsville[i][j] == v)
            {
               source.r = i;
               source.c = j;
            }
        }
    }
    queue<Q> q;
    q.push(source);
    visited[source.r][source.c] = true;
    while (!q.empty()) {
        Q p = q.front();
        q.pop();

        if (Townsville[p.r][p.c] == 'h')
            return p.d;

        if (p.r - 1 >= 0 && visited[p.r - 1][p.c] == false) {
            q.push(Q(p.r - 1, p.c, p.d + 1));
            visited[p.r - 1][p.c] = true;
        }

        if (p.r + 1 < N && visited[p.r + 1][p.c] == false) {
            q.push(Q(p.r + 1, p.c, p.d + 1));
            visited[p.r + 1][p.c] = true;
        }

        if (p.c - 1 >= 0 && visited[p.r][p.c - 1] == false) {
            q.push(Q(p.r, p.c - 1, p.d + 1));
            visited[p.r][p.c - 1] = true;
        }

        if (p.c + 1 < M && visited[p.r][p.c + 1] == false) {
            q.push(Q(p.r, p.c + 1, p.d + 1));
            visited[p.r][p.c + 1] = true;
        }
    }
}

int main()
{
    int A,B,C,maxi,T,N,M,cas=1;
    freopen("Input.txt","r",stdin);
    char Townsville[20][20];
    cin>>T;
    while(T--)
    {
    cin>>N>>M;


    for(int L=0;L<N;L++)
    {
        for(int l=0;l<M;l++)
        {
           cin>>Townsville[L][l];
        }
    }

     A=bfs(Townsville,'a',N,M);
      B=bfs(Townsville,'b',N,M);
       C=bfs(Townsville,'c',N,M);
    if(A>B && A>C) maxi=A;
    else if(B>A && B>C) maxi =B;
    else maxi=C;


    cout <<"Case "<<cas<<": "<<maxi<<endl;
    cas++;
    }
    return 0;
}
