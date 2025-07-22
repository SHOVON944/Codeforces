#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        string x;   cin>>x;
        vector<int>store;

        int size = x.size();
        for(int i=0; i<size; i++){
            if(x[i] != '0'){
                int calculate = (x[i] - '0') * pow(10, (size - i - 1));
                store.push_back(calculate);
            }
        }
        cout<<store.size()<<endl;
        for(int i : store){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}