#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n>>k;
    vector <long long> store;
    for(long long i=1; i*i<=n; i++){
        if(n%i==0){
            store.push_back(i);
            if(i != n/i){
                store.push_back(n/i);
            }
        }
    }
    if(k>store.size()){
        cout << "-1" << endl;
    } else{
        sort(store.begin(), store.end());
        cout << store[k-1] << endl;
    }

    return 0;
}