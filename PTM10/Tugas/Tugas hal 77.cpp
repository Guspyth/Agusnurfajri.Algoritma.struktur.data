#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

const int N = 10;
int cost[N][N];
int m;

char kotaLabel(int i) {
    return 'A' + i;  // Mengubah 0 jadi 'A', 1 jadi 'B', dst
}

int main() {
    cout << "Masukkan Jumlah Kota: ";
    cin >> m;

    cout << "\nMasukkan Nilai Cost Matrix:\n";
    for (int i = 0; i < m; i++) {
        cout << "Baris ke-" << i + 1 << ":\n";
        for (int j = 0; j < m; j++) {
            cin >> cost[i][j];
            if (i != j && cost[i][j] == 0)
                cost[i][j] = INT_MAX; // Anggap tidak ada jalur
        }
    }

    // Tampilkan Matriks Biaya
    cout << "\nCost Matrix (0 = sama kota, * = tidak terhubung):\n   ";
    for (int j = 0; j < m; j++) cout << kotaLabel(j) << "\t";
    cout << endl;
    for (int i = 0; i < m; i++) {
        cout << kotaLabel(i) << " ";
        for (int j = 0; j < m; j++) {
            if (cost[i][j] == INT_MAX)
                cout << "*\t";
            else
                cout << cost[i][j] << "\t";
        }
        cout << endl;
    }

    // TSP Brute Force (dengan permutasi)
    vector<int> nodes;
    for (int i = 0; i < m; i++) nodes.push_back(i);

    int minCost = INT_MAX;
    vector<int> bestPath;

    do {
        int total = 0;
        bool valid = true;

        for (int i = 0; i < m - 1; i++) {
            if (cost[nodes[i]][nodes[i + 1]] == INT_MAX) {
                valid = false;
                break;
            }
            total += cost[nodes[i]][nodes[i + 1]];
        }

        // Kembali ke kota awal
        if (valid && cost[nodes[m - 1]][nodes[0]] != INT_MAX) {
            total += cost[nodes[m - 1]][nodes[0]];
            if (total < minCost) {
                minCost = total;
                bestPath = nodes;
            }
        }

    } while (next_permutation(nodes.begin(), nodes.end()));

    // Output hasil terbaik
    if (!bestPath.empty()) {
        cout << "\nJalur Terpendek:\n";
        for (int i = 0; i < bestPath.size(); i++) {
            cout << kotaLabel(bestPath[i]) << " -> ";
        }
        cout << kotaLabel(bestPath[0]) << endl;

        cout << "\nBiaya Minimum: " << minCost << endl;
    } else {
        cout << "\nTidak ada jalur valid untuk mengunjungi semua kota.\n";
    }

    return 0;
}

