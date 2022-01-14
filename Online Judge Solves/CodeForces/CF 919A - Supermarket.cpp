#include <bits/stdc++.h>
using namespace std;

int main() {
	int m,n,a,b;
	double Ma,Mb=100.0,R;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		Ma=(float(a)/b);
		if(Ma<Mb)
        {
            Mb=Ma;
        }
	}
    R=Mb*m;
    printf("%0.8lf",R);
	return 0;
}
