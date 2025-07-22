#include <bits/stdc++.h>
using namespace std;

int main()
{
    string bg;
    int n,t;
    cin>>n>>t>>bg;
    while(t--){
        for(int i=0; i<n; ){
            if(bg[i]=='B'  &&  bg[i+1]=='G'){
                swap(bg[i], bg[i+1]);
                i++;
            }
            i++;
        }
    }
    cout<<bg<<endl;

    return 0;
}
