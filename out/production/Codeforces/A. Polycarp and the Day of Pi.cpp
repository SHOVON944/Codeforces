#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        string pie = "3141592653589793238462643383279";     // pie er last 30 digit, karon question e bolece n mane string er length 30 digit 
        int count = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==pie[i]) count++;
            else break;
        }
        cout<<count<<endl;
    }

    return 0;
}