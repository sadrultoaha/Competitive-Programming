#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);

    for (int i = 1; i < n; i++) {

        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
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
    vector<int>ans = prefix_function(tmp);
    for(auto x:ans)
        cout<<x<<" ";
    cout<<"\n";


}
