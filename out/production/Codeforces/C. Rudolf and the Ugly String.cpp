#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int counter = 0;
        for(int i=0; i<n; ){
            if(s[i]=='m'  &&  s[i+1]=='a'  &&  s[i+2]=='p'){
                counter++;
                i += 2;
            }
            else if(s[i]=='p'  &&  s[i+1]=='i'  &&  s[i+2]=='e'){
                counter++;
                i += 2;
            }
            i++;
        }
        
        
        
        cout << counter << endl;
    }
    

    return 0;
}