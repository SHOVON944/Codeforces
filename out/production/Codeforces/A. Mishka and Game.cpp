#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mSum = 0;
    int cSum = 0;
    for(int i=1; i<=n; i++){
        int m, c;
        cin >> m>>c;
        if(m>c) mSum++;
        else if(m<c) cSum++;
    }
    if(mSum==cSum) cout << "Friendship is magic!^^" << endl;
    else if(mSum>cSum) cout << "Mishka" << endl;
    else cout << "Chris" << endl;
    
    return 0;
}