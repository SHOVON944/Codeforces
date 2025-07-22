#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int perticipate[4];
        cin >> perticipate[0];
        int front = 0;
        for(int i=1; i<4; i++){
            cin >> perticipate[i];
            if(perticipate[0]<perticipate[i]) front ++;
        }
        cout << front << endl;
    }
    
    return 0;
}