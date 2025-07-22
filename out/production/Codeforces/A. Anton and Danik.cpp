#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string alpha;
    cin>>alpha;
    int count_A = 0;
    int count_D = 0;
    for(char word : alpha){
        if(word == 'A') count_A++;
        else count_D++;
    }
    if(count_A>count_D) cout<<"Anton";
    else if(count_D>count_A) cout<<"Danik";
    else cout<<"Friendship";

    return 0;
}