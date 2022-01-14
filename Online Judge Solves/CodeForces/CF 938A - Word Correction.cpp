#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int c=0,n;
    cin>>n>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
        {
            if(a[i+1]=='a' || a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o' || a[i+1]=='u' || a[i+1]=='y'){ a.erase(i+1,1); i=-1;}
        }
    }
    cout<<a;

}
