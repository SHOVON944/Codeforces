#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==0){
            cout << "0" << endl;
            break;
        }
        vector <int> candies(n);
        for(int i=0; i<n; i++){
            cin >> candies[i];
        }
        sort(candies.begin(), candies.end());
        int min_candi = candies[0];
        int eat_candies = 0;
        for(int i=1; i<n; i++){
            if(min_candi!=candies[i]) {
                eat_candies = eat_candies + (candies[i]-min_candi);
            }
        }
        cout << eat_candies << endl;
    }
    

    return 0;
}