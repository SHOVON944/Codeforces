#include<iostream>
#include<vector>
#include<algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> number((istream_iterator<int>(cin)), istream_iterator<int>());
    
    sort(number.begin(),number.end());
    for(int change : number){
        cout<<change<<endl;
    }
    return 0;
}