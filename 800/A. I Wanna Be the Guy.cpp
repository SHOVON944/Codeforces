#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y;
    for(int i=1; i<=n; i++){
        cin>>x;
    }
    for(int i=1; i<=n; i++){
        cin>>y;
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    bool level=true;
    for(int i=1;i<=n;i++){
        if(x[i-1]!=i || y[i-1]!=i){
            level = false;
        }
    }
    if(level == true) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    return 0;
}