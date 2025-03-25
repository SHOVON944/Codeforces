#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;	cin >> n;
    cin.ignore();
    set <string> tree ;
    for(int i=0; i<n; i++){
        string s;	getline(cin, s);
        tree.insert(s);
    }
    int ans = tree.size();
    cout << ans << endl;
    
    return 0;
}