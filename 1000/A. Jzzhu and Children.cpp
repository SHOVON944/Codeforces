#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n, a;
    cin>>n>>a;
    vector<int> children(n);
    for(int i=0; i<n; i++) cin>>children[i];

    int maxRound = 0;
    int lastChild = 1;
    int round = 0;
    for(int i=0 ; i<n; i++){
        round = ((children[i] + a - 1 ) / a); // ceil(children[i]/a)
        if(round>=maxRound){
            maxRound = round;
            lastChild = i +1;
        }
        round = 0;
    }
    cout<<lastChild;

    return 0;
}