#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;    cin>>m>>n;
    vector <int> tv_sets(m);
    for(int i=0; i<m; i++) cin>>tv_sets[i];
    sort(tv_sets.begin(), tv_sets.end());

    int sum_money = 0;
    int tv_carry = 0;
    for(int i=0; i<m; i++){
        if(tv_sets[i]<0){
            tv_carry++;
            int convert_plus = -tv_sets[i];
            sum_money += convert_plus;
            if(tv_carry==n) break;
        }
    }
    cout<<sum_money<<endl;

    return 0;
}