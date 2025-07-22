#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){			// muloto check korte hobe n er utdpadok gular vitore odd utdpadok ase kina except 1..
        long long x;		//  6 er udtpadok hocce 1,2,3,6..eikhane 3 bijor..
        cin >> x;                // 4 er udtpadok hocce 1,2,4...eikhane kono bijor udtpadok nei
        if(x  &  (x-1)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    
    return 0;
}