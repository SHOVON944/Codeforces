#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    int puzzles[m];
    for(int i=0; i<m; i++){
        cin>>puzzles[i];
    }
    sort(puzzles, puzzles+m);
    int minimum = INT_MAX;
    for(int i=1; i<m; i++){
        int diff = puzzles[i] - puzzles[i-1];
        minimum = min(minimum,diff);
    }
    cout<<minimum<<endl;

    return 0;
}