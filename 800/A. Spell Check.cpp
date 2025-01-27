#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main()
{
    vector<int>spell((istream_iterator<int>(cin)),istream_iterator<int>());
    for(int checker : spell){
        if(checker=='T') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}