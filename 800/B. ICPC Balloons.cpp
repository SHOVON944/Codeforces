#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <char> problem(n);
        for(int i=0; i<n; i++) cin>>problem[i];
        set <char> extra_point(problem.begin(),problem.end());
        cout<<problem.size() + extra_point.size()<<endl;
    }

    return 0;
}