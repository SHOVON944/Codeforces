#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    int counter = 0;

    for(int i=0; i<n; i++){
        string digits;
        cin >> digits;

        set <char> checker;
        for (auto c : digits) {
            checker.insert(c);
        }

        bool found = true;
        for (char ch='0'; ch<='0'+k; ch++) {
            if (checker.find(ch) == checker.end()) {
                found = false;
                break;
            }
        }
        if (found) {
            counter++;
        }
    }
    cout<<counter<<endl;
    
    return 0;
}