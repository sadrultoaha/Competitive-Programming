#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	string x;
	getline(cin,x);
	while(t--)
	{
		string str;
		getline(cin,str);
		int n=str.size();
		int ok=0;
        for(int i=0;i<n;i++)
        {
            string ts="";
            while(str[i]!=' ' && i<n)
            {
                ts+=str[i];
                i++;
            }
            if(ts=="not"){ok=1;break;}
        }
        if(ok)cout<<"Real Fancy"<<endl;
        else cout<<"regularly fancy"<<endl;
	}
	return 0;
}
