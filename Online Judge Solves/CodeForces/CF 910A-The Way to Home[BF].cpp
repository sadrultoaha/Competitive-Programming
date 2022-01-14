#include<bits/stdc++.h>
using namespace std;
/// Approache - BF
int main()
{

        int n,d,ans=0,c=0;
        string str;
        cin>>n>>d;
        cin>>str;
        int i=0;
        int br=1;
        while(i!=n-1)
        {

            if(str[i+d]=='1'){ans++;i+=d;}
            else{
                for(int j=i+d;;)
                {
                    if(j<=i){br=0;break;}
                    if(str[j]=='1'){i=j;c++;break;}
                    j--;
                }
            }
            if(br==0)break;
        }
        if(c>=0 && str[i]=='1' && br)cout<<ans+c<<endl;
        else cout<<"-1"<<endl;
}
