#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long teacher, salary, goals, reacive_money;
    cin>>teacher>>salary>>goals>>reacive_money;
    if(goals*reacive_money > salary) cout<<teacher*salary<<endl;
    else cout<<teacher*goals*reacive_money<<endl;

    return 0;
}