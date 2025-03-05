#include<bits/stdc++.h>
using namespace std;

int main()
{
    string palindrowm_word;
    cin>>palindrowm_word;

    vector<int> frequncy(26, 0);       // English Alphabate is 26...all ar initialize zero as frequency
    for(char &ch : palindrowm_word){
        frequncy[ch - 'a']++;               // frequency count for each character
    }
    int count_odd = 0;
    for(int i=0; i<26; i++){
        if(frequncy[i]%2!=0){
            count_odd++;
        }
    }

    cout<<((count_odd==0  ||  count_odd%2!=0) ? "First" : "Second")<<endl;
    /*
    if(count_odd==0  ||  count_odd%2!=0) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    */

    return 0;
}