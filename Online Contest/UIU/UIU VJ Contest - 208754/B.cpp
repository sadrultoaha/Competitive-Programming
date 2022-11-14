#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=0,T,div[1000],A[1000],temp;
   // cin>>T;
   // for(int m=0;m<T;m++)
   // {
     //   cin>>a;
        cout<<endl;
        for(int i=1;i<=1000;i++)
        {
            A[i]=i;

            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    b++;
                }
            }
            div[i]=b;
            b=0;
        }
       // sort(div,div+1000);
       // for(int k=0;k<1000;k++) cout<<div[k]<<"";

       for(int k=1;k<=1000;k++)
        {
            for(int l=k+1;l<=1000;l++)
            {
                if(div[k] < div[l]|| (div[k]==div[l] && k>l))
                {
                    if(k!=(l-1)) swap(A[k],A[l-1]);

                }

            }
            cout<<" "<<A[k]<<" ";
        }
    //}
}
