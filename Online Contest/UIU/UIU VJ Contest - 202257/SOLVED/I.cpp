#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Vcount=0;
    char A[101];
    int Count[5];
    for(int j=0;j<3;j++)
    {
        int len;
        gets(A);
        len=strlen(A);
        for(int i=0;i<len;i++)
        {
            if(A[i]=='a'|| A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u' )
            {
                Vcount++;
            }
        }
        Count[j]=Vcount;
        len=0;
        Vcount=0;
    }
    if(Count[0]==5 && Count[1]==7&& Count[2]==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
