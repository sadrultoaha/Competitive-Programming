/**
SunWalker
**/

#include<bits/stdc++.h>
using namespace std;
bool sortby(const pair<char,int> &a,const pair<char,int> &b)
{
    if(a.second==b.second)return a.first < b.first;
    return a.second > b.second;
}
int cnt=0;
vector< pair<char,int> > vc;
bool visited[100][100];
void DFS(int x, int y,char grid[100][100], int n, int m,char ch)
{
    if (x >= n || y >= m)
         {vc.push_back(make_pair(ch,cnt));cnt=0;return;}
    if(x < 0 || y < 0)
         {vc.push_back(make_pair(ch,cnt));cnt=0;return;}
    if(visited[x][y] == true)
        {vc.push_back(make_pair(ch,cnt));cnt=0;return;}
    if(ch==grid[x][y]){
    cnt++;
    visited[x][y] = true;

    }
    else
    {
        vc.push_back(make_pair(ch,cnt));
        cnt=0;
        DFS(x-1, y, grid, n, m,ch);
        DFS(x, y-1, grid, n, m,ch);
        DFS(x, y+1, grid, n, m,ch);
        DFS(x+1, y, grid, n, m,ch);
    }
}

int main()
{
    freopen("IN.txt","r",stdin);
    int prob=1,x,y;
    while(cin>>x>>y)
   {
        if(x*y==0)break;
        else
        {
            char grid[100][100];
            for(int i=0;i<x;i++)
            {
                for(int j=0;j<y;j++)
                {
                    cin>>grid[i][j];
                }
            }
            DFS(0,0,grid,x,y,'A');
            cout<<cnt<<"\n";
            cnt=0;

            prob++;
        }
   }
}





