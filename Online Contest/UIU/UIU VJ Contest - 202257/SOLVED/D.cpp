#include<bits/stdc++.h>
using namespace std;
int main()
{

               int n,len,len2,C=1;//X=0,Y=0;
               char A[201],B[201],X,Y;
               //char AB[100000];
               unordered_map<char,int>St;
               //map<string,int>::iterator it
               freopen("Input.txt","r",stdin);
               gets(A);
               gets(B);
               len=strlen(A);
               len2=strlen(B);

                for(int i=0;i<len;i++)
                {
                     X=A[i];
                    if(X!=' ')
                        St[X]++;
                }

                for(int j=0;j<len2;j++)
                {
                    Y=B[j];
                    if(Y!=' ')
                        if(--St[Y]<0) C=0;
                }



            if(C==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

}
