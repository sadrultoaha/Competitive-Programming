#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,n,m,D,K,Y,Z;
    int A[1000];
    char O;
 
    cin>>T;
    for(int a=1;a<=T;a++)
    {
        cin>>n>>m;

        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int b=0;b<m;b++)
        {
            cin>>O;
            if(O=='S')
            {
                cin>>D;
                for(int j=0;j<n;j++)
                {
                    A[j]=A[j]+D;
                }

            }
            else if(O=='M')
            {
                cin>>D;
                for(int l=0;l<n;l++)
                    A[l]=A[l]*D;
            }
            else if(O=='D')
            {
                cin>>K;
                for(int q=0;q<n;q++)
                    A[q]=A[q]/K;

            }
            else if(O=='P')
            {
                cin>>Y>>Z;
                swap(A[Y],A[Z]);
            }
            else if(O=='R')
            {
                int temp=0;
                int start=0;
                int End=n-1;
                while (start < End)
                {
                    temp = A[start];
                    A[start] = A[End];
                    A[End] = temp;
                    start++;
                    End--;
                }
            }
        }
        cout<<"Case "<<a<<":"<<endl;
        for(int r=0;r<n;r++)
        {
            //cout<<A[r];

            printf("%d",A[r]);
            if(r<=n-2)
            {
                 printf(" ");
            }


        }
        cout<<endl;
    }

}
