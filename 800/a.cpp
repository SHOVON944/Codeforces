#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        bool passed_candy = false;
        for (char ch : s) {
            if (ch == 'R') x++;
            if (ch == 'L') x--;
            if (ch == 'U') y++;
            if (ch == 'D') y--;
            if (x == 1 && y == 1) {
                passed_candy = true;
                break; // No need to continue checking once we've found the candy
            }
        }
        if (passed_candy) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}