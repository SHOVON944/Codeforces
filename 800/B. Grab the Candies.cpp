#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int m_candies = 0;
        int b_candies = 0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2==0) m_candies += arr[i];
            if(arr[i]%2!=0) b_candies += arr[i];
        }
        if(m_candies>b_candies) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}