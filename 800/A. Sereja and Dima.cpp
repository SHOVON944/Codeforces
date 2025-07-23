#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=0; i<n; i++) cin>>num[i];
    int sreja = 0;
    int dima = 0;
    int checker = 1;
    for(int i=n-1; i>=0; i--){
        if(checker%2!=0){
            if(num[i]>=num[0]){
                sreja += num[i];
                num.pop_back();
            } else{
                sreja += num[0];
                num.erase(num.begin());
            }
        } else{
            if(num[i]>=num[0]){
                dima += num[i];
                num.pop_back();
            } else{
                dima += num[0];
                num.erase(num.begin());
            }
        }
        checker++;
    }
    cout<<sreja<<" "<<dima<<endl;

    return 0;
}