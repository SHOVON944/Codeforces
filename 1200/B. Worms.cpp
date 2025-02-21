#include<bits/stdc++.h>
using namespace std;


int main()
{                                           // condition : 1st piles -> 1 to a1...2nd piles -> a1+1 to a1+a2......3rd piles -> a1+a2+1 to a1+a2+a3 and so on
    int n;
    cin>>n;
    int worms_container[n];
    int prefixing_sum[n];

    cin>>worms_container[0];
    prefixing_sum[0] = worms_container[0];

    for(int i=1; i<n; i++){
        cin>>worms_container[i];
        prefixing_sum[i] = prefixing_sum[i-1] + worms_container[i];            // eikhane prefix kore rakha hocce...condtion onujai rule melbe....
    }

    int juicy_worm, juicyWormPlace;
    cin>>juicy_worm;
    while(juicy_worm--){
        cin>>juicyWormPlace;
        int ans = 0;
            while(juicyWormPlace > prefixing_sum[ans]){         // check korce j oi worms ta condition onujai ei container er vitore ase kina
                ans++;
            }
            cout<< ans+1 <<endl;      // ans+1 -> 0th base index theke suru hoice tai
    }

    return 0;
}