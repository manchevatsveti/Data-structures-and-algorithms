#include <iostream>
#include <vector>
#include <cmath>
#include <queue>

using namespace std;

int main() {
    int x, y, n, k;
    cin >> x >> y >> n >> k;

     priority_queue<pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, greater<pair<double, pair<int,int>>>> pq;


    for (int i = 0; i < n; ++i) {
        int x2, y2;
        cin >> x2 >> y2;

        double dist = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));
        pq.push({ dist, {x2, y2} });
    }

   for(int i=0;i<k;i++) {
        auto temp = pq.top();
        pq.pop();

        cout << temp.second.first << " " << temp.second.second << endl;
    }

    return 0;
}
