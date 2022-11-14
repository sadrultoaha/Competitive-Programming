#include <bits/stdc++.h>
using namespace std;

int revrs(int n)
{
    int rev=0,rem;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}

int main()
{
	int n1,n2,T,R,Q,S;
	cin>>T;
	while(T--)
    {
        cin>>n1>>n2;
        R=revrs(n1);
        Q=revrs(n2);
        S=R+Q;
        cout<<revrs(S)<<endl;
    }
}