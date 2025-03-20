#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
    	string a;
        long long k;
        cin >> a>>k;
        for(int i=1; i<k; i++){
           long long maxDigit = *max_element(a.begin(), a.end()) - '0';
            long long minDigit = *min_element(a.begin(), a.end()) - '0';
            
            if(minDigit==0) break;
            long long num = stoll(a);		//stoll -> for long long (string to long long)
            num = num + (1LL*maxDigit*minDigit);		// 1LL for long long transfer
            
            a = to_string(num);
        }
        cout << a << endl;
    } 
    
    return 0;
}