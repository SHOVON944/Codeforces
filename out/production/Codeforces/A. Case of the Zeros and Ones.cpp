#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string numbers;
    cin>>numbers;
    int count1 = 0;
    int count0 = 0;
    for(char num : numbers){
        if(num == '1') count1++;
        else count0++;
    }
    cout<<abs(count1-count0);
    return 0;
}