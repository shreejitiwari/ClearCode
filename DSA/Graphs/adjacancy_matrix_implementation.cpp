#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> buildAdjMatrix(vector<vector<int>> edge_list, int nodes, int edges, bool directed = false, bool weighted = false)
{
    vector<vector<int>>adjacency_matrix(nodes+1, vector<int>(nodes+1, 0));

    for (auto edge : edge_list)
    {
        adjacency_matrix[edge[0]][edge[1]] = weighted?edge[2]:1;
        
        if (!directed)
            adjacency_matrix[edge[1]][edge[0]] = weighted?edge[2]:1;
    }

    return adjacency_matrix;
}

void printAdjMatrix(vector<vector<int>> &AdjMatrix)
{
    int dim = AdjMatrix.size();

    for (int i=0; i<dim; i++)
    {
        if (i==1)
        {
            for (int k = 0; k<dim; k++)
            {
                cout<<"-----";      // horizontal divider line
            }
            cout<<endl;
        }
        for (int j=0; j<dim; j++)
        {
            if (j == 0)     // to show the row numbers
            {
                cout<<i<<"   |";  // vertical divider line and row number
                continue;                
            }
                
            if (i==0)   // to show the column numbers
            {
                cout<<j<<"    ";      // column number
            }
            

            if (i>0 && j>0)
                cout<<AdjMatrix[i][j]<<"    ";
        }
        cout<<endl;
    }
}

int main()
{ 
    bool directed, weighted;
    cin>>directed>>weighted;

    int nodes, edges;
    cin>>nodes>>edges;

    vector<vector<int>> edge_list(edges, vector<int>(3, 0));

    for (int i =0; i<edges; i++)
    {
        for (int j=0; j<2; j++)
        {
            cin>>edge_list[i][j];
        }
        if (weighted)
            cin>>edge_list[i][2];
    }

    vector<vector<int>> adjacency_matrix = buildAdjMatrix(edge_list, nodes, edges, directed, weighted);
    printAdjMatrix(adjacency_matrix);

    return 0;
}