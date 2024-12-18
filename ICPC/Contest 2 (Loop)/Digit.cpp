#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int>v;
    cin>>n;
    for(int i=1; i<=n; i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=v.size()-1; i>=0; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}