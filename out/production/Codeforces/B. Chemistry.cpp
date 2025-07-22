#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int k){
    vector <int> freq(26, 0);
    for(char ch: s){
        freq[ch - 'a']++;
    }

    int odd = 0;
    for(int i:freq){
        if(i%2!=0) odd++;
    }
    int remaining = s.size() - k;
    if(odd<=(remaining%2+k)) return true;
    return false;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;

        if(isPalindrome(s, k)){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}