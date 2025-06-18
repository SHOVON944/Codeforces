#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n); 
    for (int i = 0; i < n-1; i++) cin >> d[i];
    int a, b;
    cin >>a>>b;

    int years = 0;
    for(int i = a; i < b ; i++){
        years += d[i-1];
    }

    cout <<years << endl;

    return 0;
}