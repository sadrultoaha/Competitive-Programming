#include<bits/stdc++.h>
using namespace std;
int main()
{
    string A,B;
    int i=0;
	cin>>A>>B;
     for(int i=0;i<A.size();i++){
     if(A[i]==B[i])cout<<"0";
     else cout<<"1";}
    
    return 0;
}
