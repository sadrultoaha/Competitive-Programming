    #include<bits/stdc++.h>
    using namespace std;
    #define PI acos(-1.0)
    double bs(long long D)
    {
        long long l=0,r=D;
        double mid=(l+r/2.0)+1;
        while(l<r)
        {
            mid=(l+r/2.0);
            if(mid*mid==D)return mid;
            else if(mid*mid<D)l=mid+1;
            else r=mid-1;
        }
        return -1;
    }
    int main()
    {

        long long x1,y1,x2,y2,r1,r2;
        double theta,alpha,area1,area2,ans,d;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        d=sqrt(abs(x2-x1)*abs(x2-x1)+abs(y2-y1)*abs(y2-y1));
        theta=2*asin(r2/d);
        alpha=2*asin(r1/d);
        area1=0.5*(r1*r1)*(theta-sin(theta));
        area2=0.5*(r2*r2)*(alpha-sin(alpha));
        ans=(area1+area2);
        cout.precision(12);
        cout<<fixed<<ans<<"\n";
    }
