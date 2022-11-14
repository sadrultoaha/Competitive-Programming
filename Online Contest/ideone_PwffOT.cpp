#include<bits/stdc++.h>
using namespace std;
#define read freopen("ins.txt","r",stdin);
#define write freopen("outs.txt","w",stdout);
int precedence(char op){
    if(op == '+'||op == '-')
    return 1;
    if(op == '*'||op == '/')
    return 2;
    return 0;
}
int calculate(int a, int b, char op){
    switch(op){
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
    }
}
int evaluate(string tokens){
    int i;
    stack <int> values;
    stack <char> ops;
    for(i = 0; i < tokens.length(); i++){
        if(tokens[i] == ' ')
            continue;
        else if(tokens[i] == '('){
            ops.push(tokens[i]);
        }
        else if(isdigit(tokens[i]))
        {
            int val = 0;

            while(i < tokens.length() &&  isdigit(tokens[i]))
            {
                val = (val*10) + (tokens[i]-'0');
                i++;
            }
            values.push(val);
        }
        else if(tokens[i] == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(calculate(val1, val2, op));
            }
            ops.pop();
        }

        else
        {
            while(!ops.empty() && precedence(ops.top())
                                >= precedence(tokens[i])){
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(calculate(val1, val2, op));
            }
            ops.push(tokens[i]);
        }
    }
    while(!ops.empty()){
        int val2 = values.top();
        values.pop();

        int val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(calculate(val1, val2, op));
    }

    return values.top();
}
int main()
{
    int x;
    cout<<"Do you want to save this result?\nif yes press '1' if no press '0'\n";
    cin>>x;
    //read;
    if(x)write;
    int T=1;
    while(T--)
    {
        vector< pair<string,string> >vc;
        string str;
        cin>>str;
        int i=0;
        bool save=false,sc=false;
        string first="",second="";
        while(i<str.size())
        {
            if(str[i]=='=')save=true;
            if(str[i]==';')sc=true;
            if(!save)
            {
                if(str[i]!='=' || str[i]!=';')
                    first+=str[i];
            }
            if(save){ if(str[i]!='=' || str[i]!=';') second[i]+=str[i];}
        }
        if(save)
        {
            vc.push_back( make_pair(first,second));
        }
        else cout<<evaluate(str)<<"\n";


    }

}
