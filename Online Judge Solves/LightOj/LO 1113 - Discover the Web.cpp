#include<bits/stdc++.h>

using namespace std;


int main()
{
    int T;
    string com,com2;
    stack<string>myStackF,myStackB;
    string  cur="http://www.lightoj.com/";
    // freopen("Input.txt","r",stdin);
    //freopen("Output.txt","w",stdout);
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        while(1)
        {

            cin>>com;
            if (com=="VISIT")
            {
                cin>>com2;
                myStackB.push(cur);
                cur=com2;
                cout<<cur<<endl;
                while(!myStackF.empty())
                {
                    myStackF.pop();
                }
            }
            else if(com=="BACK")
            {
               if(myStackB.empty())
               {
                   cout<<"Ignored"<<endl;
               }
               else{
                myStackF.push(cur);
                cur=myStackB.top();
                 myStackB.pop();
                cout<<cur<<endl;

               }

            }
            else if(com=="FORWARD")
            {
                if(myStackF.empty())
                {
                    cout<<"Ignored"<<endl;
                }
                else{

                myStackB.push(cur);
                cur=myStackF.top();
                myStackF.pop();
                cout<<cur<<endl;

                }
            }
            else
            {
                cur="http://www.lightoj.com/";
                 while(!myStackF.empty())
                {
                    myStackF.pop();
                }
                 while(!myStackB.empty())
                {
                    myStackB.pop();
                }
                break;

            }

        }
    }

    return 0;
}
