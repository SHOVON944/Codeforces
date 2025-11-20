#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    cin>>s>>n;
    vector<pair<int, int>> num(n);

    for(int i=0; i<n; i++) cin>>num[i].first>>num[i].second;

    sort(num.begin(), num.end());
    int power = s;
    for(int i=0; i<n; i++){
        if(num[i].first<s){
            s += num[i].second;
        } else {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";


    return 0;
}