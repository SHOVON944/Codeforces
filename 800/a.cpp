#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string dash_underscore;
        cin>>dash_underscore;
        int dash = 0;
        int underscore = 0;
        for(char c : dash_underscore){
            if (c=='-') dash++;
            else if(c=='_') underscore++;
        }
        if(dash<2  ||  underscore<1){
            cout<<endl;
            continue;
        }
        int value = dash/2;
        long long ans = value*underscore*(dash-value);
        cout<<ans<<endl;
    }

    return 0;
}
