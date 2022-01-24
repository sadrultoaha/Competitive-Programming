#include <bits/stdc++.h>
using namespace std;


int kmp(string pattern)
{
    int len = pattern.size();
    int lsp[len];
    lsp[0] = 0;
    for(int j=0,i=1;i<len;)
    {
        if(pattern[i]==pattern[j])
        {
            j++;
            lsp[i] = j;
            i++;
        }
        else if(j)j = lsp[j-1];
        else{
            lsp[i] = 0;
            i++;
        }
    }
    for(int i=0;i<tmp.size();i++)cout<<lsp[i]<<" ";
    return lsp[len-1];
}

/*
    vector<int>ans(n + 1);
    for (int i = 0; i < n; i++)
        ans[pi[i]]++;
    for (int i = n-1; i > 0; i--)
        ans[pi[i-1]] += ans[i];
    for (int i = 0; i <= n; i++)
        ans[i]++;
*/

int main()
{
    string st = "neveroddoreven";
    string rev = st;
    reverse(all(rev));
    string tmp = st+'#'+rev;
    int n = kmp(tmp);
    cout<<"\n";


}
