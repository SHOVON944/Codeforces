#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    string target = "01032025";
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<char> digits(n);
        for (int i = 0; i < n; i++) {
            cin >> digits[i];
        }
        
        vector<char> needed(target.begin(), target.end());
        
        for (int i = 0; i < n; i++) {
            for (auto it = needed.begin(); it != needed.end(); ++it) {
                if (digits[i] == *it) {
                    needed.erase(it);
                    break;
                }
            }
            if (needed.empty()) {
                cout << i + 1 << "\n";
                goto next_case;
            }
        }
        
        cout << "0\n";
    next_case:;
    }
    
    return 0;
}
