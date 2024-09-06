#include <algorithm>
#include <climits>
#include <functional>
#include <iostream>
#include <queue>
#include <vector>

typedef int Integer32;
typedef unsigned long long Unsigned64;

struct Tunnel {
    Integer32 destination;
    Integer32 kilos;
    Integer32 weight;

    Tunnel(Integer32 dest, Integer32 k, Integer32 w)
        : destination(dest), kilos(k), weight(w) {}

    friend bool operator<(const Tunnel &, const Tunnel &);
};

bool operator<(const Tunnel &tunnel1, const Tunnel &tunnel2) {
    // Reverse the order to prioritize the shortest tunnel
    return tunnel1.weight > tunnel2.weight;
}

typedef std::vector<std::vector<Tunnel>> AdjacencyList;

Integer32 performBinarySearch(const AdjacencyList &, Integer32, Integer32, Integer32);
Integer32 dijkstra(Integer32, const AdjacencyList &, Integer32);

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    Integer32 vertices, edges, maxWeight;
    std::cin >> vertices >> edges >> maxWeight;

    AdjacencyList graph(vertices);
    Integer32 start, end, kilos, weight;
    for (Integer32 i = 0; i < edges; ++i) {
        std::cin >> start >> end >> kilos >> weight;
        graph[start - 1].emplace_back(end - 1, kilos, weight);
    }

    std::cout << performBinarySearch(graph, 0, 1e9, maxWeight) << std::endl;
}

Integer32 performBinarySearch(const AdjacencyList &graph, Integer32 minWeight, Integer32 maxWeight, Integer32 limit) {
    Integer32 result = INT_MAX;

    Integer32 mid, currentDistance;
    while (minWeight <= maxWeight) {
        mid = maxWeight - ((maxWeight - minWeight) >> 1);
        currentDistance = dijkstra(0, graph, mid);

        if (currentDistance > limit) {
            minWeight = mid + 1;
        } else {
            result = mid;
            maxWeight = mid - 1;
        }
    }

    return result == INT_MAX ? -1 : result;
}

Integer32 dijkstra(Integer32 source, const AdjacencyList &graph, Integer32 maxWeight) {
    std::priority_queue<Tunnel, std::vector<Tunnel>> shortestTunnels;

    std::vector<Integer32> distances(graph.size(), INT_MAX);
    std::vector<bool> available(graph.size(), true);

    distances[source] = 0;
    shortestTunnels.push({source, 0, 0});

    while (!shortestTunnels.empty()) {
        auto [currentVertex, currentKilos, currentWeight] = shortestTunnels.top();
        shortestTunnels.pop();

        if (!available[currentVertex]) {
            continue;
        }

        auto update = [&, currentVertexRef = std::ref(currentVertex)](const Tunnel &tunnel) {
            auto [end, kilos, weight] = tunnel;

            Integer32 &currentDistance = distances[end];
            Unsigned64 adjacentDistance = distances[currentVertexRef.get()] + (Unsigned64)weight;

            if (kilos <= maxWeight && adjacentDistance < currentDistance) {
                currentDistance = adjacentDistance;
                shortestTunnels.push({end, 0, currentDistance});
            }
        };

        std::for_each(graph[currentVertex].begin(), graph[currentVertex].end(), update);

        available[currentVertex] = false;
    }

    return distances.back();
}
