#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    
    string correct;
    correct = "Timur";
    sort(correct.begin(), correct.end());
    
    while(t--){
        int n;
        string name;
        cin >> n;
        cin >> name;
        
        if(n!=5){
            cout << "NO" << endl;            // Timur -> 5 character...
            continue;
        }
        
        sort(name.begin(), name.end());
        
        if(correct == name) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    return 0;
}