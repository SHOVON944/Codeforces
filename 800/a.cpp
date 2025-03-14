#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> value(n); // Vector ব্যবহার করা ভালো
        cin >> value[0]; // প্রথম ইনপুট নেওয়া হলো
        
        if (n == 1) { // একমাত্র উপাদান থাকলে সবসময় "YES"
            cout << "YES" << endl;
            continue; // break এর বদলে continue
        }

        bool greaterOne = false;
        for (int i = 1; i < n; i++) {
            cin >> value[i];
            if (abs(value[i] - value[i - 1]) > 1) {
                greaterOne = true;
            }
        }

        if (greaterOne)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
