#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int rows, columns;

struct Coordinates {
    int row;
    int column;
    int total;

    int distanceToEdge(int rows, int columns) const {
        int minRow = min(row, rows - row);
        int minColumn = min(column, columns - column);
        return minRow + minColumn;
    }
};

struct NodeComparator {
    bool operator()(const Coordinates& node1, const Coordinates& node2) {
        if (node1.total == node2.total) {
            return node1.distanceToEdge(rows, columns) > node2.distanceToEdge(rows, columns);
        }
        return node1.total > node2.total;
    }
};

struct Component {
    int distance;
    int count;
};

struct ComponentComparator {
    bool operator()(const Component& comp1, const Component& comp2) {
        if (comp1.distance == comp2.distance) {
            return comp1.count < comp2.count;
        }
        return comp1.distance < comp2.distance;
    }
};

vector<vector<short>> room;
vector<vector<bool>> visited;
vector<vector<bool>> dfsVisited;

priority_queue<Component, vector<Component>, ComponentComparator> results;

void dfs(int row, int column, Component& component) {
    if (row < 0 || column < 0 || row >= rows || column >= columns) return;
    if (dfsVisited[row][column]) return;
    if (room[row][column] == 1) return;

    component.count++;
    dfsVisited[row][column] = true;
    dfs(row - 1, column, component);
    dfs(row + 1, column, component);
    dfs(row, column + 1, component);
    dfs(row, column - 1, component);
}

void dijkstra(int row, int column, Component& compo) {
    vector<vector<bool>> visited(rows, vector<bool>(columns, false));

    priority_queue<Coordinates, vector<Coordinates>, NodeComparator> pq;
    pq.push({row, column, 0});

    while (!pq.empty()) {
        Coordinates t = pq.top();
        pq.pop();
        if (t.row == 0 || t.row == rows - 1 || t.column == 0 || t.column == columns - 1) {
            compo.distance = t.total;
            results.push(compo);
            break;
        }
        if (visited[t.row][t.column]) continue;
        visited[t.row][t.column] = true;

        pq.push({t.row - 1, t.column, t.total + room[t.row - 1][t.column]});
        pq.push({t.row + 1, t.column, t.total + room[t.row + 1][t.column]});
        pq.push({t.row, t.column - 1, t.total + room[t.row][t.column - 1]});
        pq.push({t.row, t.column + 1, t.total + room[t.row][t.column + 1]});
    }
}

int main() {
    cin >> rows >> columns;

    room.resize(rows, vector<short>(columns));
    dfsVisited.resize(rows, vector<bool>(columns, false));
    visited.resize(rows, vector<bool>(columns, false));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            char c;
            cin >> c;
            if (c == '.') room[i][j] = 0;
            else if(c == '#') room[i][j] = 1;
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (!dfsVisited[i][j] && room[i][j] == 0) {
                Component compo = {0, 0};
                dfs(i, j, compo);  
                dijkstra(i, j, compo);
            }
        }
    }

    Component maxComponent = results.top();
    int totalCount = 0;

    while (!results.empty()) {
        if (results.top().distance >= maxComponent.distance) {
            totalCount += results.top().count;
            results.pop();
        } else {
            break;
        }
    }

    cout << totalCount;

    return 0;
}
