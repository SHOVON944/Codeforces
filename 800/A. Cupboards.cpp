#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> cb(n);
    for(int i=0; i<n; i++){
        cin >> cb[i].first>>cb[i].second;
    }
    int f_c_zero = count_if(cb.begin(), cb.end(), [](auto &p){
        return p.first ==0;
    });
    int s_c_zero = count_if(cb.begin(), cb.end(), [](auto &p){
        return p.second ==0;
    });    
    int time = 0;
    if( (n - f_c_zero) >= f_c_zero)  time += f_c_zero;
    else time += n - f_c_zero;
    
    if( (n - s_c_zero) >= s_c_zero)  time += s_c_zero;
    else time += n - s_c_zero;
    
    cout << time << endl;
    
    return 0;
}