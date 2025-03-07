#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);            // note it...read full line to avoid input issue..it  ensures the full input is read, even if spaces or newlines exist.
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    if(s==reverse_s) cout<<"NO";
    else cout<<"YES";

    return 0;
}