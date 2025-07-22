#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0;
        while(s.back() == '0'){     // last er sob zero bad dissi jotokkn na ekta non-zero digit pai
            s.pop_back();
            count++;
        }
        s.pop_back();   // karon sese ekta digit rakhtese..ei digit tai thakbe sob kaj sese..ei digit dia oi digit k vag dile ans 1 ase..
        for(char ch : s){
            if(ch != '0') count++;
        }

        cout<<count<<endl;
    }

    return 0;
}