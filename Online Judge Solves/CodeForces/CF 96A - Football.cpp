#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char team[100];
    int count1=0,count2=0;
    bool DAN=false;
    cin>>team;
    int len=strlen(team);
    for(int i=0;i<len;i++)
    {
        if(team[i]=='1')
        {
            count2=0;
            count1++;
            if(count1>=7)DAN=true;

        }
        else if(team[i]=='0')
        {
            count1=0;
            count2++;
            if(count2>=7)DAN=true;
        }

    }
    if(DAN)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
