#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;	cin >> n>>m;
    int ans = min(n, m);
    ans%2!=0? cout << "Akshat" << endl : cout << "Malvika" << endl;
    
    return 0;
}