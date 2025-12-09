#include <bits/stdc++.h>
using namespace std;
int graph[10][10];

int main() {
    int vertex, edge, source, destination;
    cin >> vertex >> edge; //6 7
    for (int i = 0; i < edge; i++)
    {
        cin >> source >> destination;
        graph[source][destination] = 1;
        graph[destination][source] = 1;
    }

    cout << "Adjacency list: \n"; //adjacency list
    for (int i = 0; i < vertex; ++i) {
        cout << i << "-> ";

        for (int j = 0; j < vertex; ++j)
        {
            if (graph[i][j] == 1)
                printf("%d ", j);
        }
        cout << "\n";
    }
    cout << "adjacency Matrix:\n";
    for (int i = 0; i < vertex; ++i) // row
    {
        for (int j = 0; j < vertex; ++j) // column
        {
            printf("%d ", graph[i][j]);
        }
        cout << "\n";
    }
}