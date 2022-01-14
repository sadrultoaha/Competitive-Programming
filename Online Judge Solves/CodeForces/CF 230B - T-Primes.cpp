#include<iostream>
#include<math.h>
using namespace std;

int prime(int V)//con
{
    if (V <= 3)
        return 1;

    if (V % 2 == 0 || V % 3 == 0 || V<=1)
        return 0;

    for (int i = 5; i * i <= V; i = i + 6)
        if (V % i == 0 || V % (i + 2) == 0)
            return 0;

    return 1;
}


int main()
{
    int flag ;
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

    if(n==1)flag=0;
    if((flag && A==n)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    flag=1;
   }

}
