#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;   cin>>n;
    vector<int>num(n);
    for(int i=0; i<n; i++)   cin>>num[i];
    sort(num.begin(), num.end());
    int sum1 = 0;
    int sum2 = 0;
    bool alter = true;
    for(int i=n-1; i>=0; i++){
        if(alter){
            sum1 += num[i];
            alter = false;
        }
        if(!alter){
            sum2 += num[i];
            alter = true;
        }
    }
    cout<<sum1<<" "<<sum2<<endl;

    return 0;
}