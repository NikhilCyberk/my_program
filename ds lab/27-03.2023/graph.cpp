#include <iostream>
using namespace std;
class Graph
{
private:
    int V;
    int **adj;
public:
    Graph(int V)
    {
        V = V;
        adj = new int *[V];
        for (int i = 0; i < V; i++)
        {
            adj[i] = new int[V];
            for (int j = 0; j < V; j++)
            {
                adj[i][j] = 0;
            }
        }
    }
    void addEdge(int v, int w)
    {
        adj[v][w] = 1;
        adj[w][v] = 1;
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex " << i << ": ";
            for (int j = 0; j < V; j++)
            {
                if (adj[i][j] == 1)
                {
                    cout << j << " ";
                }
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.printGraph();

    return 0;
}
