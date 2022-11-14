#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,A[100];
    double R,S=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        S+=A[i];
    }
    R=S/n;
    printf("%0.12lf",R);
}
