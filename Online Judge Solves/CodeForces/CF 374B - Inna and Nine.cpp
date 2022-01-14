#include<bits/stdc++.h>
using namespace std;
long long ans = 1, x;
char arr[100000];
int main()
{
    scanf("%s",&arr);
    int Len=strlen(arr);
    for(int i=1;i<=Len;i++)
    {
        if(arr[i-1]-'0' +  arr[i]-'0' == 9)
        {
            x++;
        }
        else
        {
            if(x>0 && x%2==0)
            {
                ans *= ((x/2)+1);
            }
            x = 0;
        }
    }
    printf("%lld\n",ans);
}
