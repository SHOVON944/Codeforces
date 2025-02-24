#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> num(n);
        unordered_map<int, int> count;
        
        int result = -1;
        
        for(int i=0; i<n; i++){
        	cin>>num[i];
            count[num[i]]++;
            if(count[num[i]]  ==  3) result = num[i];
        }
        cout << result << endl;
    }
    
    return 0;
}