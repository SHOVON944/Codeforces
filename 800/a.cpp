#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 20, 20, 30, 30, 40, 50};

    int x = 20; // Search for 30

    auto lb = lower_bound(v.begin(), v.end(), x);
    auto ub = upper_bound(v.begin(), v.end(), x);

    cout << "Lower Bound of " << x << " is at index: " << (lb - v.begin()) << endl;
    cout << "Upper Bound of " << x << " is at index: " << (ub - v.begin()-1) << endl;

    return 0;
}
