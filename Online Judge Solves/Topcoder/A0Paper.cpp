#include<bits/stdc++.h>
using namespace std;
vector<int>y;
class A0Paper{
    public: void getInput(string str)
    {
        string delimiter1 = "{",delimiter2 = ",",delimiter3 = "}";
        size_t pos = 0;
        string token;
        while (((pos = str.find(delimiter1))!= string::npos )|| ((pos = str.find(delimiter2))!= string::npos )|| ((pos = str.find(delimiter3))!= string::npos))
        {
        token = str.substr(0, pos);
         str.erase(0,pos + 1);
         stringstream geek(token);
         int tm = -1;
         geek >> tm;
         if(tm!=-1){y.push_back(tm);}
        }
    }
   public : string canBuild()
     {
        int cnt=0;
        for(int j=y.size()-1;j>0;j--)
        {
            y[j-1]+=y[j]/2;
        }
        if(y[0])return "Possible";
        else return "Impossible";
     }
};
 int main()
{
    freopen("in.txt","r",stdin);
    string input ;
    cin>>input;
    A0Paper().getInput(input);
    cout<<A0Paper().canBuild()<<endl;
    return 0;
}

