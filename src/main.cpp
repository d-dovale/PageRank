#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "graph.h"

using namespace std;

int main(){
    // Read the first number of lines (n) from cin and read the number of power iterations (p) from cin
    int n, p;
    cin >> n >> p;
    cin.ignore();

    // For each of the next n lines, read in the vertices
    AdjacencyList graph;

    for(int i = 0; i < n; i++){
        string line;
        getline(cin, line);
        istringstream in(line);

        // Read in the source vector
        string from;
        in >> from;

        // Read in the destination vertex
        string to;
        in >> to;

        // ADD vertices/edge (From->To) to your adjacency list here
        graph.addEdge(from, to);
    }

    graph.PageRank(p);
    graph.displayRanks();

    return 0;
}