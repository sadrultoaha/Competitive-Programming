#include<bits/stdc++.h>
#define EPS 1e-8
#define PI acos(-1)
using namespace std;

int main()
{
    double n,R,r,TV,PV,Rp;
    cin>>n>>R>>r;
    PV= (PI*(R*R));
    TV= (PI*(r*r));
    Rp=(R-r)*sin(PI/n);

    if(PV > TV && r <= (Rp+EPS) || (n<2 && PV>=TV)) cout<<"YES";
    else cout <<"NO";
}