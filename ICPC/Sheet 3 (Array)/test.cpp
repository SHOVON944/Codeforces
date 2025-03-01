#include <iostream>
#include <vector>
#include <cmath>



using namespace std;

int main() {
    int ab;
    cin >> ab;
    while (ab--){
        int n;
        cin >> n;
        if (n == 1) {
            cout << -1 << endl;
            continue;
        }
        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            p[i] = i + 1;
        }
        if (n % 2 == 0) {
            for (int i = 0; i < n; i += 2) {
                swap(p[i], p[i + 1]);
            }
        } else {
            for (int i = 0; i < n-1; i += 2) {
                swap(p[i], p[i + 1]);
            }
        }
        int sum = 0;
        bool valid = true;
        for (int i = 0; i < n; ++i) {
            sum += p[i];
            int root = round(sqrt(sum));
            if (root * root == sum) {
                valid = false;
                break;
            }
        }
        if (valid) {
            for (int i = 0; i < n; ++i) {
                cout << p[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
            continue;
        }
        vector<int> p2(n);
        for (int i = 0; i < n; i++) {
            p2[i] = n - i;
        }
        sum = 0;
        valid = true;
        for (int i = 0; i < n; ++i) {
            sum += p2[i];
            int root = round(sqrt(sum));
            if (root * root == sum) {
                valid = false;
                break;
            }
        }
        if (valid) {
            for (int i = 0; i < n; ++i) {
                cout << p2[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
            continue;
        }
        vector<int> p3(n);
        for (int i = 0; i < n; i++) {
            p3[i] = i + 1;
        }
        if (n > 3) {
            swap(p3[0], p3[n - 1]);
            swap(p3[1], p3[n - 2]);
        }
        sum = 0;
        valid = true;
        for (int i = 0; i < n; ++i) {
            sum += p3[i];
            int root = round(sqrt(sum));
            if (root * root == sum) {
                valid = false;
                break;
            }
        }
        if (valid) {
            for (int i = 0; i < n; ++i) {
                cout << p3[i] << (i == n - 1 ? "" : " ");
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }


    return 0;
}
