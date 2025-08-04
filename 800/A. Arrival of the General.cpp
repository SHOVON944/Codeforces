#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>soldier(n);
    cin>>soldier[0];
    int maximum = soldier[0];
    int minimum = soldier[0];
    int maxIndex = 0;
    int minIndex = 0;
    for(int i=1; i<n; i++){
        cin>>soldier[i];
        if(maximum<soldier[i]){
            maximum = soldier[i];
            maxIndex = i;
        }
        if(minimum>soldier[i]){
            minimum = soldier[i];
            minIndex = i;
        }
    }
    int ans = (maxIndex) + (n-minIndex-1);
    cout<<ans<<endl;

    return 0;
}