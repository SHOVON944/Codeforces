#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long total_sum = 0;
        vector<long long> odd_values;
        for (int i = 0; i < n; ++i) {
            long long val;
            cin >> val;
            total_sum += val;
            if (val % 2 != 0) {
                odd_values.push_back(val);
            }
        }
        if(odd_values.empty()){
            cout << 0 << endl;
            continue;
        }
        sort(odd_values.begin(), odd_values.end());
        long long loss = 0;
        int num_to_discard = odd_values.size() / 2;

        for (int i = 0; i < num_to_discard; ++i){
            loss += odd_values[i];
        }
        cout << total_sum - loss <<endl;
    }

    return 0;
}
