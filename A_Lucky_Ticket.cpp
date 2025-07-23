#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string num;
    cin>>n>>num;
    for (char c : num) {
        if (c != '4' && c != '7') {
            cout << "NO" << endl;
            return 0;
        }
    }
        long long firstSum = 0;
        long long lastSum = 0;
        for(int i=0; i<n/2; i++) firstSum += num[i] - '0';
        for(int i=n/2; i<n; i++) lastSum += num[i] - '0';

        if(firstSum==lastSum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    return 0;
    }
