#include<bits/stdc++.h>
#include<time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int T,M,S[100008];
    freopen("out.txt","w",stdout);
    srand(time(0));
    T = (rand() % (100 – 1 + 1)) + 1;
    cout<<T<<endl;
    while(T--){
    M=(rand() % (100000 – 1 + 1)) + 1;
    cout<<M<<endl;
    for(int i=0;i<M;i++)
    {
        S[i]=(rand() % (1000000000 – 1 + 1)) + 1;
        cout<<S[i]<<" ";

    }
    cout<<endl;

}
