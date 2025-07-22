#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> num(n);
        set <int> temp;
        for(int i=0; i<n; i++) cin >> num[i];
        bool check = false;
        for(int i=0; i<n-2; i++){
            if(num[i]<num[i+1]  &&  num[i+1]>num[i+2]){
                temp.insert(num[i]);
                temp.insert(num[i+1]);
                temp.insert(num[i+2]);
                cout << "YES" << endl;
				cout << i+1 << " " << i+2 << " " << i+3 << endl;
                check = true;
                break;
            }
        }
        if(!check) cout << "NO" << endl;
    }

    return 0;
}