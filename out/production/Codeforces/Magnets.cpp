#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <string> magnets(n);
    int group = 0;
    for(int i=0; i<n; i++){
        cin >> magnets[i];
    }
    for(int i=1; i<n; i++){
        if(magnets[i]!=magnets[i-1]) group++;
    }
    cout << group + 1<< endl;

    return 0;
}