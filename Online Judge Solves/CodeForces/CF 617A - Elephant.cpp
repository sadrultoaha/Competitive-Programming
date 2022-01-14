//CF 617A - Elephant SOLVED
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a=1,b=2,c=3,d=4,e=5;
    if(n>=e)cout<<ceil(n/e);
    else if(n==d)cout<<ceil(n/d);
    else if(n==c)cout<<ceil(n/c);
    else if(n==b)cout<<ceil(n/b);
    else if(n==a)cout<<ceil(n/a);
    return 0;
}
