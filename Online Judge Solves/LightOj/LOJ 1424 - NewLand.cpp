#include <bits/stdc++.h>
using namespace std;
#define scn(x) scanf("%d",&x)
#define scn2(x,y) scanf("%d %d",&x,&y)
int getMaxArea(int hist[], int n) {
  stack < int > s;

  int max_area = 0;
  int tp;
  int area_with_top;

  int i = 0;
  while (i < n) {

    if (s.empty() || hist[s.top()] <= hist[i])
      s.push(i++);

    else {
      tp = s.top();
      s.pop();

      area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

      if (max_area < area_with_top)
        max_area = area_with_top;
    }
  }

  while (s.empty() == false) {
    tp = s.top();
    s.pop();
    area_with_top = hist[tp] * (s.empty() ? i : i - s.top() - 1);

    if (max_area < area_with_top)
      max_area = area_with_top;
  }

  return max_area;
}
int grid[2000][2000];
string str;
int main() {
   // freopen("in.txt","r",stdin);
  int n,m,t,res=0,p;
  scn(t);
  int j=1;
  while(j<=t)
  {
      scn2(m,n);
      for(int a=0;a<m;a++)
      {
          cin>>str;
          for(int b=0;b<n;b++)
          {
            p=str[b]-'0';
             grid[a][b]=0;
             grid[a][b]=p^1;
          }
      }
      res=getMaxArea(grid[0],n);
      for(int a=1;a<m;a++)
      {
          for(int b=0;b<n;b++)
            {
                if(grid[a][b]){grid[a][b]+=grid[a-1][b];}
            }
            res=max(res,getMaxArea(grid[a],n));
      }
      printf("Case %d: %d\n",j,res);
      j++;
  }
  return 0;
}

