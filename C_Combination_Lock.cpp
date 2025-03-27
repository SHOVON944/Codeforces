#include <bits/stdc++.h>
using namespace std;
void solve() {
    long long i,n;
    scanf("%lld",&n);

    if (n % 2 == 0) {
        printf("-1\n");
        return;
    }

    for (i=0;i<n;i++) {
        printf("%lld%c", (i * 2) % n + 1, (i == n - 1) ? '\n' : ' ');
    }
}

int main() {
    long long t,test=0;
    scanf("%lld",&t);
    while (test<t){
    test++;
        solve();
    }
    return 0;
}