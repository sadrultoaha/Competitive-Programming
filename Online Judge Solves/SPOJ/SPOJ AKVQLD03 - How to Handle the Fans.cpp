#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define MAX 1000000
int sum[2*MAX];
int num[MAX];
//failed

void build(int a, int L, int R)
{
             sum[a]=0;
             if(L == R)
             {
                 sum[a]=num[L];
             return;
             }
             int mid = (L + R)/2;
             build(a * 2, L, mid);
             build(a * 2 + 1, mid + 1, R);
             sum[a]=sum[a*2]+sum[a * 2 + 1];
 }

 void update(int a, int L, int R, int pos, int u)
{
            //if(a<L||R<a) return;
            if(L == R)
             {
             sum[a] += u;
             return;
             }
            int mid = (L + R)/2;
            if(pos <= mid) update(a * 2, L, mid, pos, u);
            else update(a * 2 + 1, mid + 1, R, pos, u);

            sum[a] = sum[a * 2] + sum[a * 2 + 1];
 }

 int query(int a, int L, int R, int l, int r)
{
             if(r < L || R < l) return 0;
             if(l <= L && R <= r) return sum[a];

             int mid = (L + R)/2;
             int x = query(a * 2, L, mid, l, r);
             int y = query(a * 2 + 1, mid + 1, R, l, r);


             return x + y;
 }

int main()
{

        int N,Q,P,F,A,B;
        string IN;
       // freopen("Input.txt","r",stdin);
       cin >>N>>Q;
     build(1,0,N-1);
     while(Q--)
     {
       cin>>IN;
      if ( IN == "add" )
      {
       cin >> P>>F;
       update(1,0,N-1,P,F);
      }
      else if(IN=="find")
      {
          cin>>A>>B;
          cout << query(1,0,N-1,A,B) << endl;
      }

     }
    // cout <<query(1,0,9,1,5)<<endl;
    //update(1,0,9,5,8);
     //update(1,0,9,6,2);
     //cout << query(1,0,9,4,5)<<endl;
       //cout <<query(1,0,9,4,6)<<endl;
      //update(1,0,9,2,4);
       //cout <<query(1,0,9,2,6)<<endl;
       //update(1,0,9,6,7);
       //cout << query(1,0,9,1,6)<<endl;
        //cout << query(1,0,9,7,10)<<endl;


  return 0;
}
