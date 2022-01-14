#include <iostream>
#include <map>
using namespace std;
int main()
{
    int c=0,ok=1;
string a;
cin>>a;
for(int i=0;i<a.size()-1;i++)
{
    if( a[i]=='V' && a[i+1]=='K')
    {
        c++;
    }
    else if(a[i]=='V' && (a.size()-i)>=1 && ok==1 && a[i+2]!='K'){c++;ok=0;}
    else if(a[i+1]=='K' && ok==1 && a[i-1]!='V'){c++;ok=0;}
}
cout<<c<<endl;

}

