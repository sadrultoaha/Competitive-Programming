#include<bits/stdc++.h>

using namespace std;

int main()
{
    string c,d;
    int con=0,z=0;
    getline(cin,c);
    for(int i=0;i<c.size();i++)
   {
       if(c[i]>48)z=1;
       if(c[i]>=48 && c[i]<=57 ||c[i]==' '){if(z==1 && c[i]==' '){con=0;break;} con=1;if(z==1)d+=string(1,c[i]);}
       else {con=0;break;}
   }
   if(z==0 && c[c.size()-1]=='0'){cout<<"0"<<endl;return 0;}
   //if(c[c.size()-1]==' '){cout<<" "<<endl;return 0;}
   if(con==1)cout<<d;
   if(con==0) cout<<"invalid input";


}
