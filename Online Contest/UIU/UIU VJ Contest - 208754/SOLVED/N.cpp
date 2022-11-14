#include<bits/stdc++.h>
using namespace std;


int main()
{
    string F,M,S;
    cin>>F;
    cin>>M;
    cin>>S;
    if(F=="rock" && M=="scissors" && S=="scissors") cout<<"F";
    else if(F=="paper" && M=="rock" && S=="rock") cout<<"F";
    else if(F=="scissors" && M=="paper" && S=="paper") cout<<"F";
    else if(F=="scissors" && M=="rock" && S=="scissors") cout<<"M";
    else if(F=="rock" && M=="paper" && S=="rock") cout<<"M";
    else if(F=="paper" && M=="scissors" && S=="paper") cout<<"M";
    else if(F=="scissors" && M=="scissors" && S=="rock") cout<<"S";
    else if(F=="rock" && M=="rock" && S=="paper") cout<<"S";
    else if(F=="paper" && M=="paper" && S=="scissors") cout<<"S";
    else cout<<"?";

}
