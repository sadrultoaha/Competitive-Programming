#include<bits/stdc++.h>
using namespace std;


int main()
{
   long long n,k,c,m;
   cin>>n>>k;

   if(n%2!=0){
       if(k<=ceil(n/2.0)){
             c=0;
             m=ceil(n/2.0);
            if(k<=ceil(m/2.0)){
            for(long long i=1;c<=ceil(m/2.0);i+=2)
            {
                c++;
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
            }
            }
            else
            {
                c=ceil(n/2.0);
                for(long long i=n;c>ceil(m/2.0);i-=2)
                {
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
                c--;
                }
            }
       }
       else
       {
           c=ceil(n/2.0);
             m=ceil((c+n)/2.0);
            if(k<=m){
            for(long long i=2;c<=m;i+=2)
            {
                c++;
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
            }
            }
            else
            {
                c=n;
                for(long long i=n-1;c>m;i-=2)
                {
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
                c--;
                }
            }
       }
   }//1000000000000 500000000001
   else{
   if(k<=ceil(n/2.0)){
             c=0;
             m=ceil(n/2.0);
            if(k<=ceil(m/2.0)){
            for(long long i=1;c<=ceil(m/2.0);i+=2)
            {
                c++;
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
            }
            }
            else
            {
                c=ceil(n/2.0);
                for(long long i=n-1;c>ceil(m/2.0);i-=2)
                {
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
                c--;
                }
            }
       }
       else
       {
             c=ceil(n/2.0);
             m=ceil((c+n)/2.0);
            //if(k<=ceil(m/2.0)){
            if(k<=m){
            for(long long i=2;c<=m;i+=2)
            {
                c++;
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
            }
            }
            else
            {
                c=n;
                for(long long i=n;c>m;i-=2)
                {
                if(k==c)
                {cout<<i<<endl;c=0;
                return 0;}
                c--;
                }
            }
       }
   }

}

