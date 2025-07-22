#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long steps;
    steps =n/5;
    if(n%5!=0) steps++;
    cout<< steps;
    return 0;
}