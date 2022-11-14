#include<bits/stdc++.h>
using namespace std;

int main()
{
    string A;
    char X;
    map<char,int>St;

        cin>>A;
        int L=A.length();
       for(int i=0;i<A.length();i++)
       {
            X=A[i];
            if(St[X]++)
            {
                    St[X]-=1;
                    L-=St[X];
            }
       }

         if(L%2==0) cout<<"CHAT WITH HER!"<<endl;
         else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
