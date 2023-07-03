#include <iostream>
#include <list>
#include <vector>
using namespace std;

// Graph class
class Graph {
    int numVertices;
    vector<list<int>> adjacencyList;

public:
    Graph(int numVertices) {
        this->numVertices = numVertices;
        adjacencyList.resize(numVertices);
    }

    void addEdge(int source, int destination) {
        adjacencyList[source].push_back(destination);
    }

    void DFSUtil(int vertex, vector<bool>& visited) {
        visited[vertex] = true;
        cout << vertex << " ";

        // Recur for all the vertices adjacent to the current vertex
        for (const auto& neighbor : adjacencyList[vertex]) {
            if (!visited[neighbor]) {
                DFSUtil(neighbor, visited);
            }
        }
    }

    void DFS(int startVertex) {
        // Mark all the vertices as not visited
        vector<bool> visited(numVertices, false);

        // Call the recursive helper function to print DFS traversal
        DFSUtil(startVertex, visited);
    }
};

// Test the program
int main() {
    int numVertices;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;

    Graph g(numVertices);

    int numEdges;
    cout << "Enter the number of edges: ";
    cin >> numEdges;

    cout << "Enter the edges (source destination):" << endl;
    for (int i = 0; i < numEdges; i++) {
        int source, destination;
        cin >> source >> destination;
        g.addEdge(source, destination);
    }

    int startVertex;
    cout << "Enter the starting vertex: ";
    cin >> startVertex;

    cout << "Depth First Traversal (starting from vertex " << startVertex << "): ";
    g.DFS(startVertex);

    return 0;
}
