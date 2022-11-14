#include<iostream>
#include<math.h>
using namespace std;

bool prime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}


int main()
{
    bool flag ;
   long long n,V,T;
     double l,A;
cin>>T;
   while(T--)
   {
       cin>>n;
        V=sqrt(n);
        l=ceil(sqrt((double)n));
        A=l*l;

       flag= prime(V);

    if(n==1)flag=false;
    if((flag && A==n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    flag=true;
   }

}
