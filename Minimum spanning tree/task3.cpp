
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

struct Edge {
    size_t from;
    size_t to;
    size_t speed;

    bool operator<(const Edge &other) const {
        return speed < other.speed;
    }
};

const size_t MAX_SIZE = 100000;
Edge edges[MAX_SIZE];
size_t parents[MAX_SIZE];

size_t findVertex(size_t v) {
    if (v == parents[v])return v;

    return parents[v] = findVertex(parents[v]);
}

bool unionVertices(size_t from, size_t to) {
    size_t u = findVertex(from);
    size_t v = findVertex(to);

    parents[v] = u;
    return u != v;
}

int main() {
    size_t n, m;
    cin >> n >> m;

    size_t from, to, speed;
    for (size_t i = 0; i < m; i++) {
        cin >> from >> to >> speed;
        edges[i] = {from, to, speed};
    }
    sort(edges, edges + m);

    size_t minWeight = 0;
    size_t maxWeight = ULLONG_MAX;
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j <= n; j++) {
            parents[j] = j;
        }

        size_t count = 0;
        size_t currentMin = edges[i].speed;
        size_t currentMax = edges[i].speed;
        size_t diff = maxWeight - minWeight;
        for (size_t j = i; j < m; j++) {
            if (unionVertices(edges[j].from, edges[j].to)) {
                count++;
                currentMax = max(currentMax, edges[j].speed);
            }

            if (diff <= currentMax - currentMin)
                break;
        }

        if (count != n - 1 || diff <= currentMax - currentMin)
            continue;

        minWeight = currentMin;
        maxWeight = currentMax;
    }

    cout << minWeight << " " << maxWeight;

    return 0;
}
