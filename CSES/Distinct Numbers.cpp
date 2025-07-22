#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    set<long long>num;
    for(int i=0; i<n; i++) num.insert(*(istream_iterator<int>(cin)));
    cout<<num.size();

    return 0;
}