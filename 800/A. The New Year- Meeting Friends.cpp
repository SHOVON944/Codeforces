#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> friends(3);
    for(int i=0; i<3; i++) cin >> friends[i];
    sort(friends.begin(), friends.end());
    int min_distance = friends[2]- friends[0];
    cout << min_distance << endl;
    
    return 0;
}