#include<bits/stdc++.h>
#include <algorithm>
#include <iterator>
using namespace std;
void reverse(int [], int);
int B[1000007];
void reverse(int B[], int count)
{
   int temp;
   for (int i = 0; i < count/2; ++i)
   {
      temp = B[i];
      B[i] = B[count-i-1];
      B[count-i-1] = temp;
   }
}

int main()
{
    int n,maX=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
     sort(B,B+n);
    int j=0;
    while(n>1)
    {
        if(j%2!=0)
        {
           reverse(B,n);
           n--;

        }
        if(j%2==0)
        {
            sort(B,B+n);
            n--;
        }
        j++;
    }
    cout<<B[0];
}
