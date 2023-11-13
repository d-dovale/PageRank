#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

class AdjacencyList{
private:
    map<string, double> ranks;
    unordered_map<string, vector<string>> indegree;
    unordered_map<string, int> outdegree;

public:
    void addEdge(string from, string to) {
        // Increment outdegree and indegree for 'from' node
        outdegree[from]++;
        indegree[to].push_back(from);

        if (indegree.find(from) == indegree.end()){
            indegree[from] = vector<string>();
        }

        if (outdegree.find(to) == outdegree.end()){
            outdegree[to] = 0;
        }
    }

    void PageRank(int p) {
        map<string, double> newRanks;

        for (auto website : indegree){
            ranks[website.first] = 1.0 / (double) indegree.size();
        }

        for (int i = 1; i < p; i++){
            newRanks = ranks;

            for (auto website : indegree){
                double sum = 0;

                for (auto link : website.second){
                    sum += (1.0 / (double) outdegree.find(link)->second) * ranks[link];
                }

                newRanks[website.first] = sum;
            }

            ranks = newRanks;
        }
    }

    void displayRanks() {
        // Sorting and displaying ranks

        for (auto rank : ranks) {
            cout << rank.first << " " << fixed << setprecision(2) << rank.second << endl;
        }
    }
};