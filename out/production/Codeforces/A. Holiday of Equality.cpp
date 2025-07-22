#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>burles(n);
    for(int i=0; i<n; i++){
        cin>>burles[i];
    }
    sort(burles.begin(), burles.end());

    int sum = 0;
    for(int i : burles){
        sum = sum + (burles[n-1]-i);
    }
    cout<<sum<<endl;


    return 0;
}