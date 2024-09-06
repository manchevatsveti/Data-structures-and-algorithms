#include <iostream>
#include <vector>
#include <queue>
#include <limits>

struct Edge {
    int destination;
    int distance;

    Edge(int dest, int dist)
        : destination(dest), distance(dist) { }

    bool operator<(const Edge& rhs) const {
        return distance > rhs.distance;
    }
};

struct Node {
    int interval;
    std::vector<Edge> neighbors;
};

long long findShortestPath(std::vector<Node>& graph, int start, int end) {
    std::vector<int> previous(graph.size(), -1);
    std::vector<long long> distance(graph.size(), std::numeric_limits<long long>::max());

    distance[start] = 0;

    std::priority_queue<Edge> toVisit;
    toVisit.push({ start, 0 });

    while (!toVisit.empty()) {
        Edge currentEdge = toVisit.top();
        toVisit.pop();

        int current = currentEdge.destination;

        for (auto& neighbor : graph[current].neighbors) {
            long long altDistance = distance[current] + neighbor.distance;
            if (distance[current] % graph[current].interval != 0) {
                altDistance += (graph[current].interval - distance[current] % graph[current].interval);
            }

            if (altDistance <= distance[neighbor.destination]) {
                distance[neighbor.destination] = altDistance;
                previous[neighbor.destination] = current;
                toVisit.push(neighbor);
            }
        }
    }

    return previous[end] == -1 ? -1 : distance[end];
};

int main() {
    int nodesCount, edgesCount, start, end;
    std::cin >> nodesCount >> edgesCount >> start >> end;

    std::vector<Node> graph(nodesCount);

    for (int i = 0; i < nodesCount; i++) {
        int interval;
        std::cin >> interval;
        graph[i].interval = interval;
    }

    for (int i = 0; i < edgesCount; i++) {
        int from, to, weight;
        std::cin >> from >> to >> weight;
        graph[from].neighbors.push_back(Edge(to, weight));
    }

    std::cout << findShortestPath(graph, start, end);

    return 0;
}

