#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> soldiers(n);

    for(int i=0; i<n;i++) cin>>soldiers[i];

    int max_value = -1;
    int min_value = 101;
    int max_pos = 0;
    int min_pos = 0;

    for(int i=0; i<n; i++){
        if(max_value < soldiers[i]){
            max_pos = i;
            max_value = soldiers[i];
        }
        if(min_value >= soldiers[i]) {
            min_pos = i;
            min_value = soldiers[i];
        }
    }
    if(min_pos < max_pos) cout<< (max_pos + n - min_pos - 1 - 1);
    else cout<< (max_pos + n - min_pos - 1);


    return 0;
}