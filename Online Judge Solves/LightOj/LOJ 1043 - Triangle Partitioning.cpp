#include<bits/stdc++.h>
#define eps 1e-9
using namespace std;

double bs(double AB,double AC,double BC,double r)
{
    double F,L,AD,M;
    F=0.0;
    L=AB;
    for(int i=0;i<100;i++)
    {
        M=(F+L)/2.0;
        AD=M;
        double BD,AE,EC,DE,triP,triA,trapTriP,trapTriA,y,trap,ans;
        BD=AB-AD;
        AE=(AD*AC)/AB;
        EC=AC-AE;
        DE=(AD*BC)/AB;

        triP=(AD+AE+DE)/2.0;
        triA=sqrt(triP*(triP-AD)*(triP-AE)*(triP-DE));

        trapTriP=(BD+EC+(BC-DE))/2.0;
        trapTriA=sqrt(trapTriP*(trapTriP-BD)*(trapTriP-EC)*(trapTriP-(BC-DE)));

        y=(2*trapTriA)/(BC-DE);

        trap=DE*y + trapTriA;

        ans=triA/trap;
        if(ans>r)
        {
            L=M;
        }
        else
        {
            F=M;
        }
    }
        return AD;
}
int main()
{
    int T,cs=0;
    double x,r,AB,AC,BC;

    cin>>T;
    while(T--)
    {
        cs++;
        cin>>AB>>AC>>BC>>r;
        x=bs(AB,AC,BC,r);
        cout<<"Case "<<cs<<": "<<setprecision(10)<<x <<endl;

    }
    return 0;
}


