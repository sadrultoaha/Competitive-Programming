#include<bits/stdc++.h>
const int V = 7;
using namespace std;
vector<string>vc;


bool isok (int v, bool graph[7][7], int color[], int c)
{
    for (int i = 0; i < V; i++)
        if (graph[v][i] && c == color[i])
            return false;
    return true;
}

bool csp(bool graph[7][7], int m, int color[], int v)
{
    if (v == V)
        return true;


    for (int c = 1; c <= m; c++)
    {

        if (isok(v, graph, color, c))
        {
           color[v] = c;

           if (csp (graph, m, color, v+1) == true)
             return true;

           color[v] = 0;
        }
    }

    return false;
}

bool graphColoring(bool graph[7][7], int m)
{

    int *color = new int[V];
    for (int i = 0; i < V; i++)
       color[i] = 0;

    if (csp(graph, m, color, 0) == false)
    {
      printf("not possible\n");
      return false;
    }
	cout<<"possible"<<"\n";
    printf("Graph nodes after Colring\n");
    int i;
    for (i = 0; i < V; i++){
      printf(" %d ->", i+1);
      cout<<vc[color[i]]<<"\n";
    }
    printf("\n");
    return true;
}



int main()
{
    bool graph[V][V] = {{0,1,0,0,0,1,0},
           {1,0,1,0,0,1,0},
           {0,1,0,1,0,1,0},
           {0,0,1,0,1,1,0},
           {0,0,0,1,0,1,0},
           {1,1,1,1,1,0,0},
           {0,0,0,0,0,0,0}};
           vc.push_back("w");
	vc.push_back("Red");
	vc.push_back("Black");
	vc.push_back("Blue");
    graphColoring (graph, 3);
}
