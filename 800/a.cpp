#include<bits/stdc++.h>
using namespace std;



int main() {
    int t, test = 0;
    cin >> t;

    while (test < t) {
        test++;
        int n, m;
        cin >> n >> m;
        int MAX_N = 100;
        int MAX_M = 100;

        vector<vector<int>> matrix(n, vector<int>(m));
        vector<int> xorrow(n, 0);
        vector<int> xorcolum(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char ch;
                cin >> ch;
                matrix[i][j] = ch - '0';
                xorrow[i] ^= matrix[i][j];
                xorcolum[j] ^= matrix[i][j];
            }
        }
        int rows = 0, cols = 0;
        for (int i = 0; i < n; i++) {
            if (xorrow[i] != 0) rows++;
        }
        for (int j = 0; j < m; j++) {
            if (xorcolum[j] != 0) cols++;
        }


        cout << max(rows, cols) << endl;
    }

    return 0;
}