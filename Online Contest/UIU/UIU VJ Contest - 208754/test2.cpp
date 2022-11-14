#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    while(1){
    cin>>n;
    if (n==0) return 0;
    for(int i=1;i<=n;i++)
        fact*=i;
    cout<<fact<<endl;
    fact=1;
    }
}
