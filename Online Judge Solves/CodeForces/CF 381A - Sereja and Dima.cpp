#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,PA=0,PB=0,arr[1003];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1,c=0;
    while(l<=r)
    {
        if(c%2==0)
        {
                if(arr[l]>arr[r]){PA+=arr[l];l++;}
                else {PA+=arr[r];r--;}
        }
        else
        {
                if(arr[l]>arr[r]){PB+=arr[l];l++;}
                else {PB+=arr[r];r--;}
        }

        c++;
    }
    cout<<PA<<" "<<PB<<endl;


}
