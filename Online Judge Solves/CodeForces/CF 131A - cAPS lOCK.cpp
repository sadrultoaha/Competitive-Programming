#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fal=0;
    string A,B;
    cin>>A;
    B=A;
    if(A.size()==1)
    {
       if(A[0]>91)A[0]=toupper(A[0]);
       else A[0]=tolower(A[0]);
       cout<<A[0];return 0;
    }
    for(int i=1;i<A.size();i++)
    {
        if(A[i]<=91 && A[0]>91 ){A[i]=tolower(A[i]);if(i==A.size()-1)A[0]=toupper(A[0]);}
        else if(A[i]<=91 && A[0]<=91 ){A[i]=tolower(A[i]);if(i==A.size()-1)A[0]=tolower(A[0]);}
        else {fal=1;break;}

    }
    if(fal)cout<<B;
    else cout<<A;

}
