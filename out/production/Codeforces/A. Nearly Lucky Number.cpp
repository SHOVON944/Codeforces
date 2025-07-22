#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    long long four = count(s.begin(), s.end(), '4');
    long long seven = count(s.begin(), s.end(), '7');
    long long sum = four+seven;
    string checking = to_string(sum);
    bool final = true;
    for(char ch : checking){
        if(ch!='4'  &&  ch!='7'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}