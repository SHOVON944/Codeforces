#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t,a,x;
    vector<int>A;
    cin>>t;
    while(t--){
        cin>>a;
        if(a==0){
            cin>>x;
            A.push_back(x);
        } else if(a==1){
            cin>>x;
            cout<<A[x]<<endl;
        } else{
            A.pop_back();
        }
    }
    return 0;
}
