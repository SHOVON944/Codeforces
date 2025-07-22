#include<bits/stdc++.h>
using namespace std;

int main()
{
    int col;
    cin>>col;
    vector <int> col_num;
    for(int i=0; i<col; i++){
        int x;
        cin >> x;
        col_num.push_back(x);
    }
    sort(col_num.begin(), col_num.end());
    for(int it : col_num){
        cout<<it<<" ";
    }
    
    return 0;
}