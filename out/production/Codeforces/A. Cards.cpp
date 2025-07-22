#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string cards;
    cin >> cards;
    int one = 0;
    int zero = 0;
    
    zero = count(cards.begin(), cards.end(), 'z');
    one = count(cards.begin(), cards.end(), 'n');
    
    for(int i=1; i<=one; i++) cout<<"1 ";
    for(int i=1; i<=zero; i++) cout<<"0 ";
    
    return 0;
}