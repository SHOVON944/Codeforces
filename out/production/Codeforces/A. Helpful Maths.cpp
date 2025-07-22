#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    string math;
    cin>>math;
    vector<int>numbers;
    for(char c:math){
        if(c != '+'){
            numbers.push_back(c-'0');
        }
    }
    sort(numbers.begin(), numbers.end());
    for(size_t i=0; i<numbers.size(); i++){
        cout<<numbers[i];
        if(i!=numbers.size()-1){
            cout<<"+";
        }
    }
    return 0;
}