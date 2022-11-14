#include<bits/stdc++.h>
#include<iterator>
using namespace std;
int main()
{
    int T=0,s;
    char x[1000];
    char a;
    map<char,int>st;
    map<char,int>::iterator it;
    //freopen("Input.txt","r",stdin);
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cin>>x[i];
        a=tolower(x[i]);
        st[a]++;
    }
    for(it= st.begin();it != st.end();it++)
    {
        if(it->first) T++;
    }
    if(T==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
