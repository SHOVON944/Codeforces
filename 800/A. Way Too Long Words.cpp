#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string word;
        cin>>word;
        int size_word = word.size();
        if(size_word<=10){
            cout<<word<<endl;
        } else{
            cout<<word[0]<<size_word-2<<word[size_word-1]<<endl;
        }
    }
    return 0;
}