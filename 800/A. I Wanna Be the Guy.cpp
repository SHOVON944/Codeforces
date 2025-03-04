#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    set <int> lvls;

    int x,xlvl;
    cin>>x;
    for(int i=0; i<x; i++){
        cin>>xlvl;
        lvls.insert(xlvl);
    }
    int y,ylvl;
    cin>>y;
    for(int i=0; i<y; i++){
        cin>>ylvl;
        lvls.insert(ylvl);
    }
    int size = lvls.size();

    if(size==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!";

    return 0;
}