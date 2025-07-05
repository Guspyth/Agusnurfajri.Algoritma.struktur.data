#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>

using namespace std;

const int MAX = 100005;
const int INF = INT_MAX;

vector<pair<int, int> > adj[MAX];
bool visited[MAX];
int dist[MAX];

void dijkstra(int start) {
    memset(visited, false, sizeof(visited));
    for (int i = 0; i < MAX; i++)
        dist[i] = INF;
    dist[start] = 0;

    // priority_queue<pair<jarak, node>, vektor, urutan minimum>
    priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        pair<int, int> top = pq.top();
        pq.pop();

        int currentDist = top.first;
        int u = top.second;

        if (visited[u])
            continue;
        visited[u] = true;

        for (int i = 0; i < adj[u].size(); i++) {
            int v = adj[u][i].first;
            int weight = adj[u][i].second;
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push(make_pair(dist[v], v));
            }
        }
    }
}

int main() {
    // Graf berbobot tak berarah
    adj[1].push_back(make_pair(2, 7));
    adj[2].push_back(make_pair(1, 7));

    adj[1].push_back(make_pair(6, 14));
    adj[6].push_back(make_pair(1, 14));

    adj[1].push_back(make_pair(3, 9));
    adj[3].push_back(make_pair(1, 9));

    adj[2].push_back(make_pair(3, 10));
    adj[3].push_back(make_pair(2, 10));

    adj[2].push_back(make_pair(4, 15));
    adj[4].push_back(make_pair(2, 15));

    adj[3].push_back(make_pair(4, 11));
    adj[4].push_back(make_pair(3, 11));

    adj[3].push_back(make_pair(6, 2));
    adj[6].push_back(make_pair(3, 2));

    adj[6].push_back(make_pair(5, 9));
    adj[5].push_back(make_pair(6, 9));

    adj[5].push_back(make_pair(4, 6));
    adj[4].push_back(make_pair(5, 6));

    dijkstra(1);

    for (int i = 1; i <= 6; i++) {
        cout << "Jarak terpendek dari node 1 ke node " << i << " adalah " << dist[i] << endl;
    }

    return 0;
}

