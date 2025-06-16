#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;   cin>>n;
    int sum = 0;
    vector <int> coins(n);
    for(int i=0; i<n; i++){
        cin>>coins[i];
        sum += coins[i];
    }
    sort(coins.begin(), coins.end(), greater<int>());

    int counter = 0;
    int newSum = 0;
    for(int i : coins){
        counter++;
        newSum += i;
        if(newSum > sum/2){
            cout<<counter<<endl;
            return 0;
        }
    }

    return 0;
}