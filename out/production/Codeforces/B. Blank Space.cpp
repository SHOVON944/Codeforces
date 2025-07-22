#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;   cin>>t;
    while(t--){
        int n;   cin>>n;
        vector <int> b_space(n);
        int counter = 0;
        int max_counter = 0;
        for(int i=0; i<n; i++){
            cin>>b_space[i];
            if(b_space[i]==0) counter++;
            if(b_space[i]==1) counter = 0;
            if(counter>max_counter) max_counter = counter;
        }
        cout<<max_counter<<endl;
    }

    return 0;
}