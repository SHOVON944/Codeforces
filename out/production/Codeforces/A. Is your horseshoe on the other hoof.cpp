#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>setf;
    int x;
    for(int i=0; i<4; i++){
        cin>>x;
        setf.insert(x);
    }
    int ans = 4-setf.size();
    cout<<ans;

    return 0;
}